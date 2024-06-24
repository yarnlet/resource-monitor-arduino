<!-- https://github.com/yarnlet/resource-monitor-arduino -->
<div align="center">
    <h1> resource-monitor-arduino </h1>
    <h3> Introduction </h3>
    <p> This project allows you to use two Adafruit HT1632 dot matrix displays in order to show you your system resources. </p><br>
    <img src="assets/display.jpg" width=300 height=300>
    <h3> Usage </h3>
    <p> Make sure you have: <br>
    - Python3 (Tested on v3.12.3) - <a href="https://www.python.org/downloads/"> Download </a><br>
    - Arduino IDE (Tested on v2.1) - <a href="https://www.arduino.cc/en/software/"> Download </a><br>
    <br>
    1. Rename the root folder to 'resource-monitor-arduino' if applicable <br>
    2. Run `pip install -r requirements.txt` in the root directory <br>
    3. Open 'resource-monitor-arduino.ino' in Arduino IDE <br>
    4. Select the correct board / com port and upload the sketch <br>
    5. Edit 'monitorSerialLink.py' and replace "COMPORTHERE" with the Arduino's port (COM#) <br>
    <br>
    <b> MAKE SURE TO FOLLOW THE ADAFRUIT WIRING GUIDE FOR THE ARDUINO! </b><br>
    <a> https://learn.adafruit.com/16x24-led-matrix/multiple-displays </a>
</div>
