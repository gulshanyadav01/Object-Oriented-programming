#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A {

    private: 
    int amount;  
    public: 
        void setVala(int a ); 

        int getVal(); 


};  


void A :: setVala(int a){
    amount  = a; 
}

int A :: getVal(){
    return amount ; 
}
// derived class_name : accesss modifiers Base_class_name
// return type Class Name :: function name


class B : public A {

    int b, c;

    public:
        void setValb(int b); 

        void add(); 

}; 

void B ::  setValb(int b){

    this-> b = b; 

}

void B :: add(){

    // nesting of member function 
    int k = getVal(); 

    cout << k  + b <<endl;
}

// scope resolution operator used when member is defined out side the class


int main(){
    int a, c; 
    cin >> a >> c; 
    B b;  
    b.setVala(a);
    b.setValb(c); 
    b.add(); 
    return 0; 
}

