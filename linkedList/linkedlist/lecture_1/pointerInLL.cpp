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
 
    Student s1("aditya",53,6.71);
    cout<<s1.name<<endl;
    
    // int x=6;
    // int *ptrx=&x;
    // *ptrx=77;
    // cout<<x<<"  "<<ptrx<<"  "<<*ptrx<<endl;
    
    Student* Sptr=&s1;
    (*Sptr).name="* and dot ";
    cout<<s1.name<<endl;
    Sptr->name="arrow  "; //" *Sptr == Sptr-> "
    cout<<s1.name<<endl; //

    change3(&s1);//address ko send kiya hmane yaha pe 
     cout<<s1.name<<endl;
}