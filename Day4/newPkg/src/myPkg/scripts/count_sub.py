#!/usr/bin/env python
import rospy
from std_msgs.msg import Int32

def callback(data):
    rospy.loginfo("I heard %d", data.data)
    
def listener():

    rospy.init_node('node2py', anonymous=True)

    rospy.Subscriber('count', Int32, callback)

    rospy.spin()

if __name__ == '__main__':
    listener()
