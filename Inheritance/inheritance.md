Inheritance:
    * in inheritane one object acquire all the property and behavior of parent class automatically.

    * Derived Class : which inherit the property. 

    * Base Class : from where the property inherited

Advantages: 
    * code reusability 

Types: 
        * Single Inheritance:
            base -> derived class 
        
        * Multilevel Inheritance:
            base -> derived class -> derived class
        
        * Multiple Inheritance:
            base 1
                    \ 
                     ===> derived class 
                    /            
            base 2

        * Hierarchical Inheritance 
                    
                       derived class1
                    /
                base
                    \  derived class2

        * Hybrid: various inheritance in one program 

Syntax: 
        class Derived-class_Name : visibility Mode Base class-Name
        By default visibility mode is private 

        like:
         class A{

        }

        // derived class 
        class class B : public A{
            // statements 
        }
