# Px4

## Hardware requirements:
- Pixhawk flight controller board (e.g. Pixhawk 4, Pixhawk 2 Cube, mRo Pixhawk, etc.)
- GPS module
- Telemetry radio (optional but recommended)
- Power module
- Airspeed sensor (for fixed-wing aircraft)
- Servo cables and connectors
- USB cable for configuration

## Connecting sensors:
- Connect GPS to GPS port
- Connect telemetry radio to TELEM1 port
- Connect power module to POWER port
- Connect airspeed sensor to I2C port (for fixed-wing)
- Connect servos/motors to MAIN OUT ports
- Connect additional sensors (e.g. rangefinder) to appropriate ports

## Steps to configure PX4:
- Download and install QGroundControl on your computer
- Connect Pixhawk to computer via USB
- Use QGroundControl to load the latest PX4 firmware onto the Pixhawk
- Select your airframe type in QGroundControl
- Calibrate sensors (compass, gyroscope, accelerometer)
- Set up radio control
- Configure flight modes
- Tune parameters for your specific vehicle
- Perform pre-flight checks before flying

The key things are to connect all the required sensors properly, load the PX4 firmware, and go through the setup/calibration process in QGroundControl.



Created on 2015-06-02