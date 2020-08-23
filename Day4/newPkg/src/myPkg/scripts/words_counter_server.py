
#!/usr/bin/env python
import rospy
from myPkg.srv import wordcount
from myPkg.srv import wordcountRequest
from myPkg.srv import wordcountResponse


def handle_count_word(req):
    print("Counting the number of words in string: %s"%req.mywords)
    return wordcountResponse(len(req.mywords.split()))

def count_word_server():
    rospy.init_node('count_word_server')
    s = rospy.Service('count_word', wordcount, handle_count_word)
    print("Ready to count the words")
    rospy.spin()

if __name__ == "__main__":
    count_word_server()
