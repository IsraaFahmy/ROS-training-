
(cl:in-package :asdf)

(defsystem "myPkg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "comp" :depends-on ("_package_comp"))
    (:file "_package_comp" :depends-on ("_package"))
  ))