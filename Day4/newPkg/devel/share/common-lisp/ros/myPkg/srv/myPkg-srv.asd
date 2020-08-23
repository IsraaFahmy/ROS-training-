
(cl:in-package :asdf)

(defsystem "myPkg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "wordcount" :depends-on ("_package_wordcount"))
    (:file "_package_wordcount" :depends-on ("_package"))
  ))