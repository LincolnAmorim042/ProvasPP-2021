;não consegui fazer sem usar sort, mesmo sabendo exatamente o que precisava ser feito

(defvar L '(12 3 78 45 9))

(defun lexicografico (n)
  (sort L #'string<= :key #'write-to-string))

(lexicografico L)
(format t "~a" L)
