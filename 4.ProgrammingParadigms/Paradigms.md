# Programming Paradigms
Programming paradigms are a way to classify programming languages based on their features. Languages can be classified into multiple paradigms. A programming paradigm is a style, or “way,” of programming. Some languages make it easy to write in some paradigms but not others.
Some Common Paradigms

* __Imperative__: Programming with an explicit sequence of commands that update state. 
    * __Procedural__: Imperative programming with procedure calls. 
    * __Structured__: Programming with clean, goto-free, nested control structures.
    * __Object-Oriented__: Programming by defining objects that send messages to each other.   Objects have their own internal (encapsulated) state and public interfaces. Object orientation can be: 
        * _Class-based_: Objects get state and behavior based on membership in a class. 
        * _Prototype-based_: Objects get behavior from a prototype object. 
    
* __Declarative__: Programming by specifying the result you want, not how to get it. 
    * __Functional__ (Applicative): Programming with function calls that avoid any global state. 
    * __Logic__ (Rule-based): Programming by specifying a set of facts and rules. An engine infers the answers to questions.

## Procedural Programming
Procedural programming is a programming paradigm, derived from imperative programming, based on the concept of the procedure call. Procedures (a type of routine or subroutine) simply contain a series of computational steps to be carried out. Any given procedure might be called at any point during a program's execution, including by other procedures or itself. The first major procedural programming languages appeared circa 1957–1964, including Fortran, ALGOL, COBOL, PL/I and BASIC. Pascal and C were published circa 1970–1972.

Computer processors provide hardware support for procedural programming through a stack register and instructions for calling procedures and returning from them. Hardware support for other types of programming is possible, but no attempt was commercially successful (for example Lisp machines or Java processors).

Modularity is generally desirable, especially in large, complicated programs. Inputs are usually specified syntactically in the form of arguments and the outputs delivered as return values. 

Scoping is another technique that helps keep procedures modular. It prevents the procedure from accessing the variables of other procedures (and vice versa), including previous instances of itself, without explicit authorization. 

Less modular procedures, often used in small or quickly written programs, tend to interact with a large number of variables in the execution environment, which other procedures might also modify. 

Because of the ability to specify a simple interface, to be self-contained, and to be reused, procedures are a convenient vehicle for making pieces of code written by different people or different groups, including through programming libraries.
    
## Structured Programming
Structured programming is a programming paradigm aimed at improving the clarity, quality, and development time of a computer program by making extensive use of the structured control flow constructs of selection (if/then/else) and repetition (while and for), block structures, and subroutines.
It emerged in the late 1950s with the appearance of the ALGOL 58 and ALGOL 60 programming languages, with the latter including support for block structures. Contributing factors to its popularity and widespread acceptance, at first in academia and later among practitioners, include the discovery of what is now known as the structured program theorem in 1966, and the publication of the influential "Go To Statement Considered Harmful" open letter in 1968 by Dutch computer scientist Edsger W. Dijkstra, who coined the term "structured programming".
Structured programming is most frequently used with deviations that allow for clearer programs in some particular cases, such as when exception handling has to be performed.

### Control structures
Following the structured program theorem, all programs are seen as composed of three control structures:

* __Sequence__; ordered statements or subroutines executed in sequence.
* __Selection__; one or a number of statements is executed depending on the state of the program. This is usually expressed with keywords such as if..then..else..endif. The conditional statement should have at least one true condition and each condition should have one exit point at max.
* __Iteration__; a statement or block is executed until the program reaches a certain state, or operations have been applied to every element of a collection. This is usually expressed with keywords such as while, repeat, for or do..until. Often it is recommended that each loop should only have one entry point (and in the original structural programming, also only one exit point, and a few languages enforce this).
 
## Object Oriented Programming
As stated in previous section, the focus of procedural programming is to break down a programming task into a collection of variables, data structures, and subroutines, whereas in object-oriented programming it is to break down a programming task into objects that expose behavior (methods) and data (members or attributes) using interfaces. The most important distinction is that while procedural programming uses procedures to operate on data structures, object-oriented programming bundles the two together, so an "object", which is an instance of a class, operates on its "own" data structure.

Object-oriented programming (OOP) is a programming paradigm based on the concept of "objects", which can contain data and code. The data is in the form of fields (often known as attributes or properties), and the code is in the form of procedures (often known as methods).
Nomenclature varies between the two, although they have similar semantics: 

| Procedural | Object-oriented  |
|--|--|
| Procedure | Method  |
| Record | Object |
| Module | Class  |
| Procedure call | Message  |

### Objects and classes
Languages that support object-oriented programming typically use inheritance for code reuse and extensibility in the form of either classes or prototypes. Those that use classes support two main concepts: 

* Classes – the definitions for the data format and available procedures for a given type or class of object; may also contain data and procedures (known as class methods) themselves, i.e. classes contain the data members and member functions 
* Objects – instances of classes

### Class-based vs prototype-based
In class-based languages the classes are defined beforehand and the objects are instantiated based on the classes. If two objects apple and orange are instantiated from the class Fruit, they are inherently fruits and it is guaranteed that you may handle them in the same way; e.g. a programmer can expect the existence of the same attributes such as color or sugar_content or is_ripe.

In prototype-based languages the objects are the primary entities. No classes even exist. The prototype of an object is just another object to which the object is linked. Every object has one prototype link (and only one). New objects can be created based on already existing objects chosen as their prototype. You may call two different objects apple and orange a fruit, if the object fruit exists, and both apple and orange have fruit as their prototype. The idea of the fruit class doesn't exist explicitly, but as the equivalence class of the objects sharing the same prototype.

### Data abstraction
Data abstraction is a design pattern in which data are visible only to semantically related functions, so as to prevent misuse. The success of data abstraction leads to frequent incorporation of data hiding as a design principle in object oriented and pure functional programming. If a class does not allow calling code to access internal object data and permits access through methods only, this is a form of information hiding known as abstraction.
### Encapsulation
Encapsulation prevents external code from being concerned with the internal workings of an object. This facilitates code refactoring, for example allowing the author of the class to change how objects of that class represent their data internally without changing any external code (as long as "public" method calls work the same way). It also encourages programmers to put all the code that is concerned with a certain set of data in the same class, which organizes it for easy comprehension by other programmers. Encapsulation is a technique that encourages decoupling. 
### Composition, inheritance, and delegation
Objects can contain other objects in their instance variables; this is known as object composition. Object composition is used to represent "has-a" relationships: every employee has an address, so every Employee object has access to a place to store an Address object. 

Languages that support classes almost always support inheritance. This allows classes to be arranged in a hierarchy that represents "is-a-type-of" or “is-a” relationships. All the data and methods available to the parent class also appear in the child class with the same names. This technique allows easy re-use of the same procedures and data definitions, in addition to potentially mirroring real-world relationships in an intuitive way. 

Subclasses can override the methods defined by superclasses. Multiple inheritance is allowed in some languages, though this can make resolving overrides complicated. Some languages have special support for mixins, though in any language with multiple inheritance, a mixin is simply a class that does not represent an is-a-type-of relationship. Mixins are typically used to add the same methods to multiple classes.
### Polymorphism
Sub-typing – a form of polymorphism – is when calling code can be independent of which class in the supported hierarchy it is operating on – the parent class or one of its descendants. Meanwhile, the same operation name among objects in an inheritance hierarchy may behave differently. 
This is another type of abstraction that simplifies code external to the class hierarchy and enables strong separation of concerns. 

## Logic Programming
Logic programming is a programming paradigm that is based on logic. This means that a logic programming language has sentences that follow logic, so that they express facts and rules.

Computation using logic programming is done by making logical inferences based on all available data. In order for computer programs to make use of logic programming, there must be a base of existing logic, called predicates. Predicates are used to build atomic formulas or atoms, which state true facts. Predicates and atoms are used to create formulas and perform queries. Logic languages most often rely on queries in order to display relevant data. These queries can exist as part of machine learning, which can be run without the need for manual intervention.

There are multiple different logic programming languages. The most common language, Prolog (from the French programmation en logique, or programming in logic), can also interface with other programming languages such as Java and C. On top of being the most popular logic programming language, Prolog was also one of the first such languages, with the first prolog program created in the 1970s for use with interpretations. Prolog was developed using first-order logic, also called predicate logic, which allows for the use of variables rather than propositions. Prolog utilizes artificial intelligence to help form its conclusions and can quickly process large amounts of data. Prolog can be run with or without manual inputs, meaning in it can be programmed to run automatically as part of data processing.
Logic programming, and especially Prolog, can help businesses and organizations through:

* Natural language processing: Natural language processing (NLP) allows for better interactions between humans and computers. NLP can listen to human language in real time, and then processes and translate it for computers. This allows technology to “understand” natural language. However, NLP is not limited just to spoken language. Instead, NLP can also be utilized to read and understand documentation, both in physical print or from word processing programs. NLP is used by technologies such as Amazon Alexa and Google Home to process and understand spoken instructions, as well as by email applications to filter spam emails and warn of phishing attempts.
* Database management: Logic programming can be used for the creation, maintenance, and querying of NoSQL databases. Logic programming can create databases out of big data. The programming can identify which information has been programmed as relevant, and store it in the appropriate area. Users can then query these databases with specific questions, such as “What’s the best route to get to New York,” and logic languages can quickly sift through all of the data, run analyses, and return the relevant result with no additional work required by the user.
* Predictive analysis: With large data sets, logic languages can search for inconsistencies or areas of differentiation in order to make predictions. This can be useful in identifying potentially dangerous activities (such as going for a bike ride in the middle of a thunderstorm) or for predicting failures of industrial machines. It can also be used to analyze photos and make predictions around the images, such as predicting the identity of objects in satellite photos, or recognizing the patterns that differentiate craters from regular land masses. 

An example of how logical programming looks like: 
```lisp
canfly(X) :- bird(X), not abnormal(X).
abnormal(X) :- wounded(X).
bird(john).
bird(mary).
wounded(john).
```
Given the goal of finding something that can fly: 
```lisp
:- canfly(X).
```
the completion of the program above is: 
```lisp
canfly(X) iff bird(X), not abnormal(X). 
abnormal(X) iff wounded(X). 
bird(X) iff X = john or X = mary. 
X = X. 
not john = mary. 
not mary = john.
```
