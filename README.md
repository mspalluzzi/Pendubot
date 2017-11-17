# Pendubot
Self Balancing Robot
This is a project I started in the summer of 2017 and had to shelf in order to put full attention to the current UROV Project.
serial.ino is an arduino file which allows the arduino to obtain sensor data from a raspberry pi and then drive the two stepper motors
name.py is the pi program that reads the sensor data, passes it through a complimentary filter and PID controller and passes that data to the arduino
