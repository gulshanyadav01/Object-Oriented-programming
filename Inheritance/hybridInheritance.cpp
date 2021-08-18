/*

     Base Class
         |
    Derived class     Base class 
         |              |
         |              |
         |              |

          Derived class 

*/

#include<iostream>
using namespace std; 

class Student{

    int roll; 

    public:
        void getRoll(int x){
            roll = x; 
        }

        void  displayRoll(){
            cout <<"Roll Number : " <<  roll << endl;
        }

}; 

class Test: public Student{

    protected: 
        float t1, t2;
    
    public:
        void getTest(float a, float b){
            t1 = a; 
            t2 = b; 
        }

        void displayMarks(){
            cout << "Marks of subject 1: " << t1 << endl;
            cout << "Marks of subject 2: " << t2 << endl;
        }

    

}; 

class Sport {

    protected: 
        float sp; 

    public: 
        void getSportMarks(){
            cout  << "enter sports marks" << endl;
            cin >> sp; 
        }

        void displaySport(){
            cout << "Sport marks : " << sp << endl;
        }
}; 

class Result: public Test, public Sport{

    float total; 

    public: 
        void totalMark(){
            float total = t1  + t2 + sp; 

            displayRoll(); 
            displayMarks(); 
            displaySport(); 

            cout << "total Marks obtained are : " << total <<endl;

        }

}; 

int main(){
    Result obj1; 
    obj1.getRoll(1); 
    obj1.getTest(10, 20); 
    obj1.getSportMarks(); 

    obj1.totalMark();
    return 0; 
}