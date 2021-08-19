#include<iostream>
using namespace std; 

class Base {

    public:
        void disp(){
            cout << "Base class display without virtual"<<endl;
        }

        virtual void show(){

            cout << "Base show function in running" << endl;

        }


}; 

class Derived : public Base{

    public: 
        void disp(){

            cout <<"Derived class disp is running"<<endl;

        }

        void show(){

            cout << "Derived class show function is running"<<endl;

        }

}; 

int main(){

    Base *bp; 
    Base objb; 
    Derived objd;

    bp = &objb;  
    bp->disp(); 
    bp->show(); 

    bp = &objd; 
    
    bp-> disp(); 
    bp->show(); 

    return 0; 
    
}

