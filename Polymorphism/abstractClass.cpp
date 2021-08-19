/*
 atleast one pure virtual function then it is know as abstract class 
*/

// pure virtual function 
// virtual void disp() = 0; 
// then that call is known as abstract class 

// Rules of abstract class : 
// you can't make the object of abstract class 
// pointer and reference can make 

#include<iostream>

#include<bits/stdc++.h>

using namespace std; 

class  Base{
    public:
        virtual void disp()  = 0; 
};

class Derived : public Base {
    
        public: 
            void disp(){
                cout << "Derived class" <<endl;
            }
        

}; 

int main(){

    Base *objb; 



    Derived obj; 

    objb = &obj;

    objb-> disp();

    return 0; 
}
