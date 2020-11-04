# arduino_ros_led_control
switch between three LEDs on arduino (subscriber) using 'a', 's', and 'd' keyboard inputs through ROS publisher.

The folder 'arduino_ros' is the ROS package which has source code for the keyboard input and the 'ROSkeyinLED.ino' is the arduino sketch which should be moved to your sketch folder for arduino and after uploading the sketch to arduino do not forget to run following command on your terminal (without the greater than signs).

>> rosrun rosserial_python serial_node.py /dev/ttyACM0

Assuming you have already set up the arduino IDE and necessary ROS libraries, the above command will make the arduino topic available to the rest of ROS.

For any discussion or collaboration contact on vajpeyianirudh@gmail.com
