#include<iostream>
using namespace std; 

class Test {
    int a, b; 

    public: 
        
        Test(){
            a = b = 0; 
        }

        Test(int x, int y){
            a = x, b = y; 

        }

        Test operator + (Test t ){
                Test temp; 

                temp.a = a + t.a; 

                temp.b = b + t.b; 

                return temp; 
        }

        void disp(){

                cout << "value of a " << a << endl;
                cout << "value of b" <<  b << endl;
        }


}; 

int main(){

    Test t1, t2, t3; 

    t1 = Test(10, 20); 

    t2 = Test(30, 40); 

    t3 = t1 + t2; 

    t1.disp(); 
    t2.disp();
    t3.disp(); 

}