import serial
import time
import win32api, win32con
def pressKey(key):
    win32api.keybd_event(key, 0, 0, 0)
    time.sleep(0.05)  # Small delay to simulate the press
    win32api.keybd_event(key, 0, win32con.KEYEVENTF_KEYUP, 0)
# arrow keyboard
KEY_UP = 0x26    # Up Arrow
KEY_DOWN = 0x28  # Down Arrow
KEY_LEFT = 0x25  # Left Arrow
KEY_RIGHT = 0x27  # Right Arrow
ENTER = 0x0D
# arduino port 9600
PORT = 9600
arduino = serial.Serial(port='COM6', baudrate=PORT, timeout=.1)
time.sleep(2)
print("Arduino connected on", arduino.port)
while True:
    if arduino.in_waiting > 0:
        data = arduino.readline().decode('utf-8').rstrip()
        print("Data:", data)
        if data == "up":
            pressKey(KEY_UP)
        elif data == "down":
            pressKey(KEY_DOWN)
        elif data == "left":
            pressKey(KEY_LEFT)
        elif data == "right":
            pressKey(KEY_RIGHT)
        elif data == "click":
            pressKey(ENTER)

