/*
         Base class 
         /      \
        /        \
       /          \
   Der class    Der class 

*/

#include<iostream>
using namespace std; 

class A {

    protected:
        int num;


    public: 
        void getnum(){

            cout << "enter number"<<endl;
            cin >> num; 
            
        }


};

class B : public A{
    public:
        void square(){

            cout << "square of the number " << " : "<<  num * num << endl;

        }

}; 


class C : public A {

    public: 
        void cube(){
            cout << "cube of the number" << " : " << num * num * num << endl;
        }

}; 

int main(){
    B obj1; 
    C obj2; 
    obj1.getnum();
    obj2.getnum(); 
    obj1.square(); 

    obj2.cube(); 
    
    return 0;   

}