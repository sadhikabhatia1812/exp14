AIM:-
To study and implement Inheritance in C++.

THEORY:-
In Object-Oriented Programming (OOP), inheritance is one of the most important features. It allows a class (called the derived class or child class) to acquire the properties and behaviors (data members and member functions) of another class (called the base class or parent class).

The concept of inheritance promotes code reusability, extensibility, and hierarchical classification. It models real-world relationships, for example, a Car is a type of Vehicle. Instead of rewriting common properties (like wheels, engine, speed), they can be inherited from the base class.

Types of Inheritance in C++
Single Inheritance – One base class and one derived class.
Multiple Inheritance – A derived class inherits from more than one base class.
Multilevel Inheritance – A class is derived from another derived class (a chain).
Hierarchical Inheritance – Multiple derived classes inherit from a single base class.
Hybrid Inheritance – A combination of two or more types of inheritance.

Access Specifiers in Inheritance
public → Public and protected members of the base class remain accessible in the derived class.
protected → Public and protected members of the base class become protected in the derived class.
private → All inherited members become private in the derived class.

Advantages of Inheritance:
Promotes code reusability (once written, base class code can be reused).
Makes code easier to extend and maintain.
Establishes a clear “is-a” relationship between classes.
Reduces redundancy and enhances efficiency.

ALGORITHM:-
Program 1: Single Inheritance (Base → Derived)
Create a Base class with a protected data member x.
Initialize x in the constructor.
Derive a Derived class publicly from Base.
Add a display() function in Derived to access x.
Create an object of Derived and call display().

Program 2: Hierarchical Inheritance
Create a Parent class with showParent().
Create two derived classes Child1 and Child2, each inheriting Parent.
Add their own functions.
Create objects of Child1 and Child2 and call both parent and child functions.

Program 3: Multilevel Inheritance
Create class A with msgA().
Derive B from A with msgB().
Derive C from B with msgC().
Create object of C and call all functions.

Program 4: Multiple Inheritance
Create class A with msgA() and class B with msgB().
Derive class C from both A and B.
Add msgC() in C.
Create object of C and call all methods.

Program 5: Simple Single Inheritance
Create class Parent with function display().
Create class Child derived from Parent.
Add function show() in Child.
Create object of Child and call both functions.

CONCLUSION:-
Inheritance allows one class to use the features of another, promoting code reusability and reducing duplication.
Through different programs, we successfully implemented:
Single Inheritance (Base → Derived).
Hierarchical Inheritance (one parent, multiple children).
Multilevel Inheritance (A → B → C).
Multiple Inheritance (derived class from more than one base).
We observed how different types of inheritance work in practice, strengthening the concept of “is-a” relationship in OOP.
Thus, the concept of Inheritance in C++ has been successfully studied and implemented.
