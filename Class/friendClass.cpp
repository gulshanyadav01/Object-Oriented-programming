#include<iostream>
using namespace std; 

// friend class can access the private data and member of class; 
class A{
    int x = 10; 

    friend class B; 

}; 

class B{

    public:
        void display(A &a){
            cout << a.x <<" "; 
        }
}; 

int main(){

    A a; 
    B b; 
    b.display(a);
    return 0; 

}