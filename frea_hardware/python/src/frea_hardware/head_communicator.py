import serial
import math
import time

from frea_hardware.head_communication_protocol import *
from frea_hardware.exceptions import *

class HeadCommunicator:
    def __init__(self, port):
        self._serial = serial.Serial()
        self._serial.baudrate = HEAD_BAUD
        self._serial.port = port
        self._serial.timeout = 1
        self._serial.open()

        if not self._serial.is_open:
            raise HardwareFailedToConnect

        # Wait for reset
        time.sleep(5)


    def __del__(self):
        if self._serial.is_open:
            self._serial.close()


    def radsToPc(self, rads, _min, _max):
        # We expect rads to range from _min to _max
        _range = _max - _min
        pc = (rads - _min) / _range
        return pc


    def writeMsg(self, msg):
        if not self._serial.is_open:
            raise HardwareConnectionInterrupted
        self._serial.write(msg)
        self._serial.flush()


    def setHeadRoll(self, rads):
        if rads > math.pi / 2:
            rospy.logwarn(
                "Head roll ranges from 0 to {}, received {}".format(
                    math.pi/2, rads))
        angle_pc = 100*self.radsToPc(rads, 0, math.pi/2)
        msg = NECK_BYTE + int(angle_pc).to_bytes(1, 'little') + END_MSG_BYTE

        self.writeMsg(msg)

    def setMouthPitch(self, rads):
        if rads > math.pi / 2:
            rospy.logwarn(
                "Mouth pitch ranges from 0 to {}, received {}".format(
                    math.pi/2, rads))
        angle_pc = 100*self.radsToPc(rads, 0, math.pi/2)
        msg = MOUTH_BYTE + int(angle_pc).to_bytes(1, 'little') + END_MSG_BYTE

        self.writeMsg(msg)

    def setRightEarPitch(self, rads):
        if rads > math.pi / 2:
            rospy.logwarn(
                "Right ear pitch ranges from 0 to {}, received {}".format(
                    math.pi/2, rads))
        angle_pc = 100*self.radsToPc(rads, 0, math.pi/2)
        msg = RE_SERVO_BYTE + int(angle_pc).to_bytes(1, 'little') + END_MSG_BYTE

        self.writeMsg(msg)

    def setLeftEarPitch(self, rads):
        if rads > math.pi / 2:
            rospy.logwarn(
                "Left ear pitch ranges from 0 to {}, received {}".format(
                    math.pi/2, rads))
        angle_pc = 100*self.radsToPc(rads, 0, math.pi/2)
        msg = LE_SERVO_BYTE + int(angle_pc).to_bytes(1, 'little') + END_MSG_BYTE

        self.writeMsg(msg)
    
    def setPixelColours(self, h, s, v):
        hsv = zip(h, s, v)
        flattened_hsv = [item for sublist in ([a, b, c] for a, b, c in hsv) for item in sublist]
        msg = PIXELS_BYTE + bytes(flattened_hsv) + END_MSG_BYTE
        self.writeMsg(msg)
