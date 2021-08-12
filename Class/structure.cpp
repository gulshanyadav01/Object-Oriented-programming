#include<iostream>
using namespace std;

struct Rectangle{
    int width,length;

    Rectangle(int w, int l){
        width = w; 
        length = l; 
    }

    void areaOfRectangle(){
        cout << width*length << " "; 
    }

}; 

int main(){
    struct Rectangle rec(4,6); 

    rec.areaOfRectangle(); 
    return 0; 
}