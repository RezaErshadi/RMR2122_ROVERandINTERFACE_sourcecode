#!/usr/bin/env python3
"""

"""
import rclpy # ROS2 Python library
from rclpy.node import Node # import the Node module
# Interfaces
from std_msgs.msg import String
from interfaces_subzero.srv import SendString
from interfaces_subzero.msg import MyGPSmsg
from interfaces_subzero.srv import LoggerString
# Python packages
import time
import os
import subprocess
import datetime
# Submodules
from subzero_v1.submodules import apreshttp

class ApRES(Node): # MODIFY NAME
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def __init__(self):
        # >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        # ---Initiate the Node object
        super().__init__('ApRES')
        self.client_Logger = self.create_client(LoggerString,"Logger_service")
        self.Client_Write2Logger("info","ApRES: started")
        # ---Initiate Parameters
        self.APIFlag = False
        self.SetFlag = False
        self.BurstFlag = False
        self.nPnt = 0
        # ---Initiate Subscribers
        self.ListenToGPS = self.create_subscription(MyGPSmsg,'GPSPub_topic',self.UpdateGPS,10)
        self.ListenToRadio = self.create_subscription(String,'RadioPub_topic',self.radio_listener,10)
        # ---Initiate Services
        self.server_ = self.create_service(SendString,"ApRES_service",self.ApRES_Server)
        # ---Initiate Clients
        self._client_Radio = self.create_client(SendString,"Radio_service")
        self._client_Driving = self.create_client(SendString,"Driving_service")
        # ---Initiate Publishers

        # ---Initiate Timers

        # <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def radio_listener(self, msg):
        try:
            RadioMsg = msg.data
            comma_splt = RadioMsg.split(",")
            RadioCommand = comma_splt[0]
            RadioSubCommand = comma_splt[1:]
            if RadioCommand == "ApRES":
                if RadioSubCommand[0] == "On":
                    self.ApRES_On()
                elif RadioSubCommand[0] == "Set":
                    self.ApRES_Set(RadioSubCommand)
                elif RadioSubCommand[0] == "Burst":
                    self.ApRES_Burst()
        except Exception as e:
            self.Client_Write2Logger("error","ApRES: radio_listener")
            self.Client_Write2Logger("exception",str(e))
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def ApRES_On(self):
        try:
            if self.BurstFlag == False:
                self.Client_Write2Logger("info","ApRES: create an API")
                API_ROOT = "192.168.1.1"
                API_KEY = "18052021"
                self.ApRES = apreshttp.API(API_ROOT)
                self.ApRES.setKey(API_KEY)
                self.APIFlag = True
                self.Client_Write2Radio(f"ApRES: On")
                self.Client_Write2Logger("info","ApRES: API created")
        except Exception as e:
            self.Client_Write2Logger("error","ApRES: ApRES_On")
            self.Client_Write2Logger("exception",str(e))
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def ApRES_Set(self,ApRESConfig):
        try:
            if self.APIFlag == True and self.BurstFlag == False:
                self.Client_Write2Logger("info","ApRES: setting new config")
                ApRES_act = ApRESConfig[0]
                ApRES_type = ApRESConfig[1]
                ApRES_n_attenuator = int(ApRESConfig[2])
                ApRES_attenuators = list(map(int, ApRESConfig[3:7]))
                ApRES_gains = list(map(int, ApRESConfig[7:11]))
                ApRES_tx = list(map(int, ApRESConfig[11:19]))
                ApRES_rx = list(map(int, ApRESConfig[19:27]))
                self.polarization = ApRESConfig[27]
                ApRES_n_subburst = int(ApRESConfig[28])
                self.DownloadFile = False
                if ApRESConfig[29] == "true":
                    self.DownloadFile = True
                self.prefix = ApRESConfig[30]
                self.BurstTime = (ApRES_n_subburst * ApRES_n_attenuator * ApRES_tx.count(1) * ApRES_rx.count(1) * 1.1) + 2
                self.Client_Write2Logger("info",f"ApRES: act {ApRES_act}")
                self.Client_Write2Logger("info",f"ApRES: type {ApRES_type}")
                self.Client_Write2Logger("info",f"ApRES: natt {ApRES_n_attenuator}")
                self.Client_Write2Logger("info",f"ApRES: att {ApRES_attenuators}")
                self.Client_Write2Logger("info",f"ApRES: gain{ApRES_gains}")
                self.Client_Write2Logger("info",f"ApRES: tx {ApRES_tx}")
                self.Client_Write2Logger("info",f"ApRES: rx {ApRES_rx}")
                self.Client_Write2Logger("info",f"ApRES: npol {self.polarization}")
                self.Client_Write2Logger("info",f"ApRES: nburst {ApRES_n_subburst}")
                self.Client_Write2Logger("info",f"ApRES: download {self.DownloadFile}")
                self.Client_Write2Logger("info",f"ApRES: prefix {self.prefix}")
                self.Client_Write2Logger("info",f"ApRES: waitime {self.BurstTime}")
                self.ApRES.radar.config.set(nAtts = ApRES_n_attenuator,
                                            nBursts = ApRES_n_subburst,
                                            rfAttnSet = tuple(ApRES_attenuators ),
                                            afGainSet = tuple(ApRES_gains),
                                            txAnt = tuple(ApRES_tx),
                                            rxAnt = tuple(ApRES_rx))
                self.Client_Write2Radio(f"ApRES: Set")
        except Exception as e:
            self.Client_Write2Logger("error","ApRES: ApRES_Set")
            self.Client_Write2Logger("exception",str(e))
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def ApRES_Burst(self):
        if self.APIFlag == True and self.BurstFlag == False:
            self.Client_Write2Logger("info","ApRES: burst")
            self.BurstFlag = True
            self.nPnt += 1
            # gpsTime = self.gpsTime
            # gpsPose = [self.RoverNow,self.Alt]
            # ApRESstring = f"{gpsPose[0]},{gpsPose[1]},{gpsPose[2]}"
            fn = f"{self.nPnt}_SubZero{self.prefix}_{self.gpsTime}_{self.polarization}.dat"
            self.Client_Write2Radio("ApRES: Bursting")
            while True:
                attempt = 1
                try:
                    # self.ApRES.radar.burst(filename=fn,userData=ApRESstring)
                    self.ApRES.radar.burst(filename=fn)
                    break
                except Exception as e:
                    self.Client_Write2Logger("error","ApRES: burst failed")
                    self.Client_Write2Logger("exception",str(e))
                    self.Client_Write2Radio("ApRES: Burst Failed")
                    time.sleep(self.BurstTime)
                    attempt += 1
                    if attempt>3:
                        self.Client_Write2Logger("critical","ApRES: fatal error")
                        self.Client_Write2Logger("exception",str(e))
                        self.Client_Write2Radio("ApRES: Fatal Error. Check the APRES")
                        self.ApRES_Done = False
                        self.Client_Write2Radio("ApRES: Failed")
                        return
            time.sleep(self.BurstTime)
            self.Client_Write2Logger("info","ApRES: Burst done")
            if self.DownloadFile == True:
                if not os.path.exists(fn):
                    self.Client_Write2Radio("ApRES: Downloading")
                    self.Client_Write2Logger("info","ApRES: downloading")
                    try:
                        self.ApRES.data.download("Survey/" + fn)
                    except Exception as e:
                        self.Client_Write2Logger("error","ApRES: download failed")
                        self.Client_Write2Logger("exception",str(e))
                    subprocess.Popen([f"mv {fn} ~/Downloads/SubZero/ApRES"],shell=True,stdin=None,stdout=None,stderr=None,close_fds=True)
                    self.Client_Write2Logger("info",f"ApRES: downloaded to ~/Downloads/SubZero/ApRES as {fn}")
                self.Client_Write2Logger("info","ApRES: download done")

            self.Client_Write2Logger("info",">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>")
            self.Client_Write2Logger("info",f"ApRES: BURSTINFO@Point{self.nPnt}")
            self.Client_Write2Logger("info",f"ApRES: PointName@{fn}")
            self.Client_Write2Logger("info",f"ApRES: PointInfo@{self.nPnt},{self.gpsTime},{self.RoverNow},{self.Alt},{self.iQual}")
            self.Client_Write2Logger("info","<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<")

            self.BurstFlag = False
            self.ApRES_Done = True
            self.Client_Write2Radio("ApRES: Done")
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def ApRES_Server(self,request, response):
        try:
            act = request.data
            if act == "Burst":
                self.Client_Write2Logger("info","ApRES: received burst command from auto drive")
                self.ApRES_Done = False
                time.sleep(2)
                self.ApRES_Burst()
            if self.ApRES_Done == True:
                self.Client_Write2Driving("ApRES: Done")
            elif self.ApRES_Done == False:
                self.Client_Write2Driving("ApRES: Failed")

            # For test:
                # self.Client_Write2Radio("ApRES: Waiting")
                # self.Client_Write2Logger("info","ApRES: is waiting - burst simulation")
                # time.sleep(3)
                # self.ApRES_Done = True
                # self.Client_Write2Radio("ApRES: Done")
                # self.Client_Write2Driving("ApRES: Done")
                # self.Client_Write2Logger("info","ApRES: simulation done")

            response.msg_sent = True
            return response
        except Exception as e:
            self.Client_Write2Logger("error","AutoDrive: ApRES_Server")
            self.Client_Write2Logger("exception",str(e))
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def UpdateGPS(self, msg):
        try:
            self.gpsTime = msg.time
            self.RoverNow = [msg.lat,msg.lon]
            if msg.iqual != 9:
                self.Alt = msg.alt
                self.iQual = msg.iqual
        except Exception as e:
            self.Client_Write2Logger("error","AutoDrive: UpdateGPS")
            self.Client_Write2Logger("exception",str(e))
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def Client_Write2Driving(self,MsgForDriving):
        try:
            request = SendString.Request()
            request.data = MsgForDriving
            self._client_Driving.call_async(request)
        except Exception as e:
            self.Client_Write2Logger("error","AutoDrive: Client_Write2Driving")
            self.Client_Write2Logger("exception",str(e))
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def Client_Write2Radio(self,MsgForRadio):
        try:
            request = SendString.Request()
            request.data = MsgForRadio
            self._client_Radio.call_async(request)
        except Exception as e:
            self.Client_Write2Logger("error","AutoDrive: Client_Write2Radio")
            self.Client_Write2Logger("exception",str(e))
    """ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
    def Client_Write2Logger(self,LoggerType,LoggerMsg):
        request = LoggerString.Request()
        request.type = LoggerType
        request.data = LoggerMsg
        self.client_Logger.call_async(request)
""" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
def main(args=None):
    rclpy.init(args=args) # initialize ROS communications
    node = ApRES() # create (Instantiate) the node (Modify the name)
    rclpy.spin(node) # keeps the node alive
    rclpy.shutdown() # shuting down the node after killing the node (ctrl+c)
""" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ """
if __name__ == "__main__":
    main()
