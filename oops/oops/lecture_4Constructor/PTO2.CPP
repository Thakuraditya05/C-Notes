#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student  {
public:
   int rollNumber;
   int age;

};

int main(){

    Student s1;
// Student s2=s1; //deep copy   opreture overloadding hai ye bhai sab "=" ki copy constructor  ki *********************************
    s1.rollNumber=101;
    s1.age=100;
    
    Student s2=s1; //deep copy 
    cout<<s2.rollNumber<<"  "<<s2.age;
    s1.age=10;
    cout<<s2.rollNumber<<"  "<<s2.age;

}