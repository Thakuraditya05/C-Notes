#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student  {
public:
    const int rollNumber;  //constant ek baar bn gaya to usko change nahi kr skte hai and constant ki value turant deni padti hai
    // const static int rollNumber=10;  
    int age;

    Student(int r, int a):rollNumber(r),age(a){}  //initilization list hai 
        // YAAD RAKHNA KI initializer_list SE WE CAN NITIALISE CONSTANT BUT FROM CONSTROTLIST WE CANT initializ CONSTANT 

};

int main(){

    Student s1(100,20); //constructor callong ho rahi hai 
    // s1.rollNumber=80; //iss case me ye cheez possible nahi hai  
    cout<<s1.rollNumber<<" "<<s1.age<<endl;    
}