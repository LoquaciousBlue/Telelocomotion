;; Auto-generated. Do not edit!


(when (boundp 'haptic_parameter::Data)
  (if (not (find-package "HAPTIC_PARAMETER"))
    (make-package "HAPTIC_PARAMETER"))
  (shadow 'Data (find-package "HAPTIC_PARAMETER")))
(unless (find-package "HAPTIC_PARAMETER::DATA")
  (make-package "HAPTIC_PARAMETER::DATA"))

(in-package "ROS")
;;//! \htmlinclude Data.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass haptic_parameter::Data
  :super ros::object
  :slots (_point1 _rotation1 _button1 _point2 _rotation2 _button2 ))

(defmethod haptic_parameter::Data
  (:init
   (&key
    ((:point1 __point1) (instance geometry_msgs::Point :init))
    ((:rotation1 __rotation1) (instance haptic_parameter::Rotation :init))
    ((:button1 __button1) (instance haptic_parameter::Button :init))
    ((:point2 __point2) (instance geometry_msgs::Point :init))
    ((:rotation2 __rotation2) (instance haptic_parameter::Rotation :init))
    ((:button2 __button2) (instance haptic_parameter::Button :init))
    )
   (send-super :init)
   (setq _point1 __point1)
   (setq _rotation1 __rotation1)
   (setq _button1 __button1)
   (setq _point2 __point2)
   (setq _rotation2 __rotation2)
   (setq _button2 __button2)
   self)
  (:point1
   (&rest __point1)
   (if (keywordp (car __point1))
       (send* _point1 __point1)
     (progn
       (if __point1 (setq _point1 (car __point1)))
       _point1)))
  (:rotation1
   (&rest __rotation1)
   (if (keywordp (car __rotation1))
       (send* _rotation1 __rotation1)
     (progn
       (if __rotation1 (setq _rotation1 (car __rotation1)))
       _rotation1)))
  (:button1
   (&rest __button1)
   (if (keywordp (car __button1))
       (send* _button1 __button1)
     (progn
       (if __button1 (setq _button1 (car __button1)))
       _button1)))
  (:point2
   (&rest __point2)
   (if (keywordp (car __point2))
       (send* _point2 __point2)
     (progn
       (if __point2 (setq _point2 (car __point2)))
       _point2)))
  (:rotation2
   (&rest __rotation2)
   (if (keywordp (car __rotation2))
       (send* _rotation2 __rotation2)
     (progn
       (if __rotation2 (setq _rotation2 (car __rotation2)))
       _rotation2)))
  (:button2
   (&rest __button2)
   (if (keywordp (car __button2))
       (send* _button2 __button2)
     (progn
       (if __button2 (setq _button2 (car __button2)))
       _button2)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point _point1
    (send _point1 :serialization-length)
    ;; haptic_parameter/Rotation _rotation1
    (send _rotation1 :serialization-length)
    ;; haptic_parameter/Button _button1
    (send _button1 :serialization-length)
    ;; geometry_msgs/Point _point2
    (send _point2 :serialization-length)
    ;; haptic_parameter/Rotation _rotation2
    (send _rotation2 :serialization-length)
    ;; haptic_parameter/Button _button2
    (send _button2 :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point _point1
       (send _point1 :serialize s)
     ;; haptic_parameter/Rotation _rotation1
       (send _rotation1 :serialize s)
     ;; haptic_parameter/Button _button1
       (send _button1 :serialize s)
     ;; geometry_msgs/Point _point2
       (send _point2 :serialize s)
     ;; haptic_parameter/Rotation _rotation2
       (send _rotation2 :serialize s)
     ;; haptic_parameter/Button _button2
       (send _button2 :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point _point1
     (send _point1 :deserialize buf ptr-) (incf ptr- (send _point1 :serialization-length))
   ;; haptic_parameter/Rotation _rotation1
     (send _rotation1 :deserialize buf ptr-) (incf ptr- (send _rotation1 :serialization-length))
   ;; haptic_parameter/Button _button1
     (send _button1 :deserialize buf ptr-) (incf ptr- (send _button1 :serialization-length))
   ;; geometry_msgs/Point _point2
     (send _point2 :deserialize buf ptr-) (incf ptr- (send _point2 :serialization-length))
   ;; haptic_parameter/Rotation _rotation2
     (send _rotation2 :deserialize buf ptr-) (incf ptr- (send _rotation2 :serialization-length))
   ;; haptic_parameter/Button _button2
     (send _button2 :deserialize buf ptr-) (incf ptr- (send _button2 :serialization-length))
   ;;
   self)
  )

(setf (get haptic_parameter::Data :md5sum-) "0b2afd3d9a0612aab16dcedb918a16fb")
(setf (get haptic_parameter::Data :datatype-) "haptic_parameter/Data")
(setf (get haptic_parameter::Data :definition-)
      "geometry_msgs/Point point1
haptic_parameter/Rotation rotation1
haptic_parameter/Button button1
geometry_msgs/Point point2
haptic_parameter/Rotation rotation2
haptic_parameter/Button button2

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: haptic_parameter/Rotation
float64 m00
float64 m01
float64 m02
float64 m10
float64 m11
float64 m12
float64 m20
float64 m21
float64 m22

================================================================================
MSG: haptic_parameter/Button
float64 A
float64 B

")



(provide :haptic_parameter/Data "0b2afd3d9a0612aab16dcedb918a16fb")


