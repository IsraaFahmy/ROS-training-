;; Auto-generated. Do not edit!


(when (boundp 'myPkg::counter)
  (if (not (find-package "MYPKG"))
    (make-package "MYPKG"))
  (shadow 'counter (find-package "MYPKG")))
(unless (find-package "MYPKG::COUNTER")
  (make-package "MYPKG::COUNTER"))
(unless (find-package "MYPKG::COUNTERREQUEST")
  (make-package "MYPKG::COUNTERREQUEST"))
(unless (find-package "MYPKG::COUNTERRESPONSE")
  (make-package "MYPKG::COUNTERRESPONSE"))

(in-package "ROS")





(defclass myPkg::counterRequest
  :super ros::object
  :slots (_mywords ))

(defmethod myPkg::counterRequest
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

(defclass myPkg::counterResponse
  :super ros::object
  :slots (_count ))

(defmethod myPkg::counterResponse
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

(defclass myPkg::counter
  :super ros::object
  :slots ())

(setf (get myPkg::counter :md5sum-) "fcbde222c0a68b4a1d0b96c95b82d17a")
(setf (get myPkg::counter :datatype-) "myPkg/counter")
(setf (get myPkg::counter :request) myPkg::counterRequest)
(setf (get myPkg::counter :response) myPkg::counterResponse)

(defmethod myPkg::counterRequest
  (:response () (instance myPkg::counterResponse :init)))

(setf (get myPkg::counterRequest :md5sum-) "fcbde222c0a68b4a1d0b96c95b82d17a")
(setf (get myPkg::counterRequest :datatype-) "myPkg/counterRequest")
(setf (get myPkg::counterRequest :definition-)
      "string mywords 

---

int32 count

")

(setf (get myPkg::counterResponse :md5sum-) "fcbde222c0a68b4a1d0b96c95b82d17a")
(setf (get myPkg::counterResponse :datatype-) "myPkg/counterResponse")
(setf (get myPkg::counterResponse :definition-)
      "string mywords 

---

int32 count

")



(provide :myPkg/counter "fcbde222c0a68b4a1d0b96c95b82d17a")


