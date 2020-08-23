#!/usr/bin/env python

import rospy
from myPkg.msg import comp

def callback(message):
    rospy.loginfo("complex number recieved: %d + %d i", message.real,message.imaginary)


rospy.init_node('comp_node2', anonymous=True)
rospy.Subscriber("comp_topic", comp, callback)

rospy.spin()

