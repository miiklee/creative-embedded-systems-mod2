# this code will read values from the ESP32 and print them on the command line
# based on code from Professor Mark Santolucito

#make sure to pip install pyserial 
import serial

ser = serial.Serial('/dev/cu.usbserial-023E554B', 115200)

while(True):
  print(str(ser.readline().strip(), 'ascii'))