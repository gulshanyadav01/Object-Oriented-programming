/*
    base class
        |
    derived class
        |
    derived class

*/

#include<iostream>
using namespace std; 

class Student{

    protected:
        int roll; 
    
    public:
        void getRoll(int a){
            roll  = a; 
        }

        void putRoll(){
            cout <<"Roll Number " <<" : " <<  roll <<" " << endl;
        }

}; 

class Test : public Student {
    protected:
        float m1, m2; 

    public: 
        void getMarks(float a, float b){
            m1 = a; 
            m2 = b; 
        }

        void putMarks(){

            cout << "marks in subject 1" <<" : " << m1 << endl;
            cout << "marks in subject 2" << " : " << m2 << endl;

        }


}; 

class Result : public Test {

    int total; 
    public:
        void displayMarks (){
            total = m1+ m2;
            putRoll(); 
            putMarks(); 
            cout <<"Total" << " " << total << " " << "marks"<<endl;
        }


}; 

int main(){

    Result stu;

    stu.getRoll(2); 
    stu.getMarks(10, 20);

    stu.displayMarks(); 

    return 0; 
}