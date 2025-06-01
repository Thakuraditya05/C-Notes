#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student  {
public:
    int rollNumber;
   int age;
 
   static int getRollNumber(){ //static funcction keval static member ko hi access kr skte hai bs 
    return rollNumber; //ye object ko belong nahi krta shidha class ko hi belong krat hai 
   }

};

int main(){

    Student s1;

    s1.rollNumber=101;
    s1.age=100;
    


    s1.age=10;

 
}