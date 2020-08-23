#!/usr/bin/env python

import sys
import rospy
from myPkg.srv import wordcount
from myPkg.srv import wordcountRequest
from myPkg.srv import wordcountResponse

def count_word_client(mywords):
    rospy.wait_for_service('count_word')
    try:
        count_word = rospy.ServiceProxy('count_word', wordcount)
        resp1 = count_word(mywords)
        return resp1.count
    except rospy.ServiceException as e:
        print("Service call failed: %s"%e)

def usage():
    return "%s [Input a string]"%sys.argv[0]

if __name__ == "__main__":

    while not rospy.is_shutdown():
        mywords = raw_input ('Enter your string: ')
        print("Requesting number of words in %s"%(mywords))
        print("The number of words is %d"%(count_word_client(mywords)))
        print ("")
