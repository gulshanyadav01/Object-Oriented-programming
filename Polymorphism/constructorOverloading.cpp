#include<iostream>
using namespace std; 


class Test{

    int a, b; 
    public: 

    Test(){
        a = 0; 
        b = 0; 
    }

    Test(int x){
        a = x; 
        b = x; 
    }
    Test(int x, int y){
        a = x; 
        b = y; 
    }

    void display(){
        cout << "value of a and b is " << a << " " << b <<endl;
    }
    

}; 

int main(){

    Test A; 
    Test B(100); 
    Test C(100, 200);  

    A.display(); 
    B.display();
    C.display(); 
    return 0; 
    
}