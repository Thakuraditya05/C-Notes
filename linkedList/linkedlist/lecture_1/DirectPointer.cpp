#include<iostream>
using namespace std;

// blue print for user defined data types
class Student{
public: 
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks ){  //this key word ko void kr skte hai by using different variable name by same variable ke liya aapo this use krna padega 
        (*this).name=name; //This is pinter of automatic class ko reperesent krta hai 
        this->rno=rno;
        this->marks =marks;
    }
};
void change3(Student* s){
    s->name="shiva";
}
int main(){
 
    Student* s1=new Student ("aditya",53,6.71); // dynamic application bolte hai issko yani run time pe hua hoga ye sb 
    cout<<s1->marks;
    
    
    
}