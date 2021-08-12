#include<iostream>
using namespace std; 

class rectangle{
    int length;
    public:
        rectangle(){
            length = 0;  
        }
        friend int printLength(rectangle); 
}; 

int printLength(rectangle rec){
    rec.length = 10; 
    return rec.length;
}


class B;  // forward decleration 

class A{
    private:
        int x; 

    public:

        void setData(int i ){
            x = i; 
        }

        friend void minimum(A, B); 

}; 

class B{
    private:
        int y; 
    
    public:
        void setData(int i){
            y = i;  
        }

        friend void minimum(A, B); 
}; 


void minimum(A a, B b){
    if(a.x <= b.y){
        cout << a.x << endl;
    }
    else{
        cout << b.y <<endl;
    }
}


int main(){
    // make the object 

    A a; 
    B b; 
    a.setData(10);
    b.setData(20);

    minimum(a, b);
    return 0;  

}