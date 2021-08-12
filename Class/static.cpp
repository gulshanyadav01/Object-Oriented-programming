#include<iostream>
using namespace std; 

class emp{
    public: 
    static int temp; 
    
}; 

int emp:: temp = 0; 

int main(){
    cout << emp::temp<<endl;
    return 0; 
}