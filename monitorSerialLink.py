import psutil
import time
from serial import Serial

ser = Serial('COMPORTHERE', 9600) # make sure to switch "COMPORTHERE" with the port number of your Arduino

def systemInfo():
    cpu_usage = psutil.cpu_freq().current / 1000 # this number is in GHz
    ram_usage = psutil.virtual_memory().used // 1024 // 1024 # this number is in MB
    return cpu_usage, ram_usage

while True:
    cpu, ram = systemInfo()
    data = f"{cpu},{ram}\n"

    #print(data) <- you can uncomment this if you would like your terminal to output this data
    ser.write(data.encode())
    time.sleep(2)


