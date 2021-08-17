/*

    base class 1 , base class 2, and many more  

            \        /
             \      /
              \    /
               \  /
           Derived Class 


*/

#include<iostream>
using namespace std; 

class A{

    protected: 
        int a;

    public: 
        void get_a(int x){
            a = x; 
        }
        
    
}; 

class B{

    protected:
        int b;

    public: 
        void get_b(int x){
            b = x; 
        }
}; 

class C : public A, public B{
    
    int total; 
    public:
        void sum(){
            total = a + b; 
        }
        
        void display(){
            cout << total << " "; 
        }
}; 

int main(){

    C obj; 
    obj.get_a(10);
    obj.get_b(30); 
    obj.sum(); 
    obj.display(); 

    return 0; 

}