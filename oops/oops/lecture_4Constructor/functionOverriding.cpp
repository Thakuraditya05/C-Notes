#include<iostream>
#include<vector>
#include<string>
using namespace std;

// when a function of base class is redefined in its  derived class its called function overriding.

// Assessing through Scope Resolution Operator;

// Access through pointer;

// Run Ttime  pe  basically function overrriding 
// compile time pe function overloadding -->

// parent pointer can store child address 

class A{
public: 
    int a_ka_public;
    void show(){
        cout<<"ye A ka apna Show Hai "<<endl;
    }
};


class B: public A{
public: 
    int b_ka_public;
    void show(){
        cout<<"ye B ka apna Show Hai "<<endl;
    }
}; 

// maan lo vishel ke under maileg nikalne ka function bana hau hai '
// to hrr class ke liye alag alag formula haga na milage niaklane ke liye 

int main(){

// ponter bhi ek type ka varable hai jo address store krta hai 
// int *a=&a; // apne type ka address hi store krta hai keval  

         A *a; //pointer variablle jo ki a ka address stoe kkrnna chahiye 
        A a2;
        a=&a2;




        // A a;
        // a.show();

        // B b;
        // b.show();

        // b.A::show();// scope resolution dena padega taki hmm A wale show function ko call ke sake 


} 