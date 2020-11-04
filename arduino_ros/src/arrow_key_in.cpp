#include "ros/ros.h"
#include "std_msgs/Char.h"
#include <stdio.h>
#include <sstream>
#include <iostream>

int main(int argc, char **argv)
{

	ros::init(argc, argv, "switch_led");
	ros::NodeHandle nh;
	ros::Publisher pub = nh.advertise<std_msgs::Char>("change_led", 10);
	ros::Rate loop_rate(1);

	char input;

	while (ros::ok()){
		
		std::cout << "Press 'a', 's', and 'd' followe by enter key to switch between LEDs and 'q' to exit: ";
		std::cin >> input;

		if (input == 'q'){
			ros::shutdown();
		}
		else {
			std_msgs::Char key;
			key.data = input;
			pub.publish(key);
			ros::spinOnce();
			loop_rate.sleep();
		}
	}
	return 0;
}
