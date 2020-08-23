;; Auto-generated. Do not edit!


(when (boundp 'myPkg::wordcount)
  (if (not (find-package "MYPKG"))
    (make-package "MYPKG"))
  (shadow 'wordcount (find-package "MYPKG")))
(unless (find-package "MYPKG::WORDCOUNT")
  (make-package "MYPKG::WORDCOUNT"))
(unless (find-package "MYPKG::WORDCOUNTREQUEST")
  (make-package "MYPKG::WORDCOUNTREQUEST"))
(unless (find-package "MYPKG::WORDCOUNTRESPONSE")
  (make-package "MYPKG::WORDCOUNTRESPONSE"))

(in-package "ROS")





(defclass myPkg::wordcountRequest
  :super ros::object
  :slots (_mywords ))

(defmethod myPkg::wordcountRequest
  (:init
   (&key
    ((:mywords __mywords) "")
    )
   (send-super :init)
   (setq _mywords (string __mywords))
   self)
  (:mywords
   (&optional __mywords)
   (if __mywords (setq _mywords __mywords)) _mywords)
  (:serialization-length
   ()
   (+
    ;; string _mywords
    4 (length _mywords)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _mywords
       (write-long (length _mywords) s) (princ _mywords s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _mywords
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _mywords (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass myPkg::wordcountResponse
  :super ros::object
  :slots (_count ))

(defmethod myPkg::wordcountResponse
  (:init
   (&key
    ((:count __count) 0)
    )
   (send-super :init)
   (setq _count (round __count))
   self)
  (:count
   (&optional __count)
   (if __count (setq _count __count)) _count)
  (:serialization-length
   ()
   (+
    ;; int32 _count
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _count
       (write-long _count s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _count
     (setq _count (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass myPkg::wordcount
  :super ros::object
  :slots ())

(setf (get myPkg::wordcount :md5sum-) "fcbde222c0a68b4a1d0b96c95b82d17a")
(setf (get myPkg::wordcount :datatype-) "myPkg/wordcount")
(setf (get myPkg::wordcount :request) myPkg::wordcountRequest)
(setf (get myPkg::wordcount :response) myPkg::wordcountResponse)

(defmethod myPkg::wordcountRequest
  (:response () (instance myPkg::wordcountResponse :init)))

(setf (get myPkg::wordcountRequest :md5sum-) "fcbde222c0a68b4a1d0b96c95b82d17a")
(setf (get myPkg::wordcountRequest :datatype-) "myPkg/wordcountRequest")
(setf (get myPkg::wordcountRequest :definition-)
      "string mywords 

---

int32 count

")

(setf (get myPkg::wordcountResponse :md5sum-) "fcbde222c0a68b4a1d0b96c95b82d17a")
(setf (get myPkg::wordcountResponse :datatype-) "myPkg/wordcountResponse")
(setf (get myPkg::wordcountResponse :definition-)
      "string mywords 

---

int32 count

")



(provide :myPkg/wordcount "fcbde222c0a68b4a1d0b96c95b82d17a")


