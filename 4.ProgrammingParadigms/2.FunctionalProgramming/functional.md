* Functions
    * Pure functions
        * never store state 
        * never mutate the incomming data
        * the output only deppends on the input, do not deppend on what came before, history dosn't matter
    * data and procedures are separated, unlike OOP
    
# Racket:
The Racket language is a modern dialect of Lisp and a descendant of Scheme. It is designed as a platform for programming language design and implementation.

## Syntax

### Infix vs Prefix

> (+ 3 5)

8
> (* 1 2 3)

6
> (+ (* 3 5)
>
>       (- 10 6))
     
19

### Functions

```lisp
(define (square n)
  (* n n))
```
```lisp
(square 5)
```
25

### Conditionals

```lisp
(cond
    ((test) stuff if test is true)
    ((different test) different stuff)
    (else more stuff))
```

Calculating absolute value:

```lisp
(define (abs x)
  (cond
    ((> x 0)
     x)
    ((= x 0)
     0)
    (else
     (- x))))
```

### Lists

* A list

```lisp
'(1 2 3)
```

* Accessing head and tail

```lisp
(car '(1 2 3))
```
1
```lisp
(cdr '(1 2 3))
```
'(2 3)

* Making lists

```lisp
(cons '1 '(2 3))
```
'(1 2 3)

* Example, factorial
```lisp
(define (fact n)
    (cond
        ((<= n 1)
          1)
        (else
          (* n (fact (- n 1)))))
```

* Example, fibonacci

```lisp
(define (fib n)
    (cond ((<= n 0)
            0)
          ((= n 1)
            1)
          (else
            (+
              (fib (- n 1))
              (fib (- n 2)))))))
```

## The change example

```lisp
(define (make-change x denoms)
    (cond
        ((= x 0)
          '())
        ((empty? denoms)
          false)
        ((< x (car denoms))
          (make-change x (cdr denoms)))
        (else
          (cons (car denoms) (make-change (- x
        (car denoms)) denoms)))))
```