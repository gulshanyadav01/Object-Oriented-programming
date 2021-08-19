#include<iostream>
using namespace std; 

// operator overloading  : give additional meaning to the operators 
// those operator which don't participate in operator loading 
// 1  (. , . *)
// 2  scope resolution operator  ::
// 3  sizeof
// 4 conditional operator 

// return_type className :: operator op(Argument list){
    // body 
// }

// unary operator overloading 

class Test{
    int a, b, c; 

    public: 

        void getData(int x, int y, int z ){
            a = x; 
            b = y; 
            c = z; 
        }

        void operator - (){
            a = -a; 
            b = -b; 
            c = -c; 
        }

        void disp() {

            cout << " value of A " <<" " << a << endl;

            cout << " value of B " <<" " << b << endl;

            cout << " value of C " <<" " << c << endl;

        }
};

int main(){
    Test obj; 

    obj.getData(-1 , 2 , 3); 

    obj.disp(); 

    -obj; 

    obj.disp(); 

    return 0; 


}