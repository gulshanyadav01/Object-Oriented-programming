/*
 same name function but parameter and return type must be  different. 


*/

#include<iostream>
using namespace std; 


int cal(int a){
    return a*a;
}

int cal(int a, int b){
    return a + b; 
}

int main(){

    cout << cal(4); 
    cout << endl;
    cout << cal (4, 10);
}

