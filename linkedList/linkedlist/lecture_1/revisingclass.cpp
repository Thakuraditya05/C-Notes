#include<iostream>
using namespace std;

// blue print for user defined data types
class Student{
public: 
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks ){  //this key word ko void kr skte hai by using different variable name by same variable ke liya aapo this use krna padega 
        this->name=name;
        this->rno=rno;
        this->marks =marks;
    }
};
void change(Student s){////by value pass hui hai to no change 
    s.name="aman";  //by value pass hui hai to no change 
}
void change2(Student &s){////by value pass hui hai to no change 
    s.name="aman";  //by value pass hui hai to no change 
}
int main(){
    int x; //initialisation
    x=2;//decleration
    // Student s1;
    // s1.marks=6.71;
    // s1.name="aditya";
    // s1.rno=53;
    Student s1("aditya",53,6.71);
    // cout<<s1.name;
    // cout<<s1.marks;
    // cout<<s1.rno;
    // s1.name="singh";
    // cout<<s1.name;
    // cout<<s1.marks;
    // cout<<s1.rno;

   // change2(s1);
    // cout<<s1.name;

  
}