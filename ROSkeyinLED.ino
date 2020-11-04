#include <ros.h>
#include <std_msgs/Char.h>

int red = 11, green = 10, blue = 9;
int on = 255, off = 0;
ros::NodeHandle nh;

void inputKey(const std_msgs::Char& key){

  if (key.data == 'a'){
    analogWrite(red, on);
    analogWrite(green, off);
    analogWrite(blue, off);
    }

  else if (key.data == 's'){
    analogWrite(red, off);
    analogWrite(green, on);
    analogWrite(blue, off);
    }

  else if (key.data == 'd'){
    analogWrite(red, off);
    analogWrite(green, off);
    analogWrite(blue, on);
    }

  else {}  
}

ros::Subscriber<std_msgs::Char> sub("change_led", &inputKey);

void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop(){
  nh. spinOnce();
  delay(1);
}
