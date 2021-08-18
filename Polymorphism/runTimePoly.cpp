#include<iostream>
using namespace std; 

class A{
    
    public: 
        virtual void disp() = 0; 
}; 


class B : public A{
    int b; 
    public: 

        B(int x){
            b = x; 
        }

        void disp(){
            cout << " B has value " << b <<endl;
        }
}; 

class C : public A{
    int val2; 
    
    public:
        C(int x ){
            val2 = x; 
        }
        void disp(){
            cout << " C has value " <<  val2 << endl;
        }
}; 

int main(){
   A *bp[2]; 
   B objb(100); 
   C objc(200); 

   bp[0] =  &objb; 
   bp[1] = &objc; 

   bp[0]-> disp(); 
   bp[1]-> disp(); 
   return 0; 
}