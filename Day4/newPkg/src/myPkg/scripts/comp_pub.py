#!/usr/bin/env python

import rospy
from myPkg.msg import comp
import random

pub = rospy.Publisher('comp_topic', comp, queue_size=10)

rospy.init_node('comp_node1', anonymous=True)

rate = rospy.Rate(1)

while not rospy.is_shutdown():
    Comp_num = comp()
    Comp_num.real = int(5*random.random())
    Comp_num.imaginary = int(5*random.random())
    rospy.loginfo(Comp_num)
    pub.publish(Comp_num)
    rate.sleep()

