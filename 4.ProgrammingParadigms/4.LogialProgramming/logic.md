* Prolog
    * based on formal logic
        * socrates is a man, all man al mortal, therefor socrates is mortal
    * No instructions, but
        * facts
        * clauses
    * Intead of programing the how, we program the what
    
# Syntax

## Variables
Start with capital
## Costants
Don't start with capital
## Facts

```
state(washington).
border(washington, oregon).
border(washington, idaho).
border(oregon, california).
```

## Rules

`:-` Logical implication

```
adjacent(X, Y) :- border(X, Y).
```

```
?- adjacent(washington, oregon).
```
yes
```
?- adjacent(oregon, washington).
```
no

No reflective case is applied so new rule is needed:

```
adjacent(X, Y) :- border(X, Y).
adjacent(X, Y) :- border(Y, X).
```

Examples - Ancestors

```
father(homer, bart).
father(homer, lisa).
mother(marge, bart).
mother(marge, lisa).
```

```
?- mother(X, bart).
X = marge

?- mother(marge, Y).
Y = bart ? ;
Y = lisa
```

```
sibling(X, Y) :-
    mother(Z, X),
    mother(Z, Y),
    X \== Y.

sibling(X, Y) :-
    father(Z, X),
    father(Z, Y),
    X \== Y.
```

```
?- sibling(X, Y).
X = bart
Y = lisa
``

## Lists


    []

    [1, 2, 3]

    [apples, bananas]

    [apples, [1, 3], mangos]

### Bar notation


    [F | R ]

F: first
R: rest

    [1, 2, 3]

    [F | R]

    F = 1
    R = [2, 3]

### Underscore

I don't care: _

Example rule to test membership to a list

    member(X, [X | _]).
    member(X, [_ | R]) :- member(X, R).

## The change example

The rule

    change(amount, coins, change)
    


    change(0, _, []).
    change(A, [F | R], [F | X]) :-
           A >= F,
           B is A - F,
           change(B, [F | R], X).
    change(A, [_ | R], X) :-
           A > 0,
           change(A, R, X).