#include<iostream>
#include<vector>
#include<string>
using namespace std;

// a is parent for B AND C or to or sunte ho B and C are parents of class D (A--->B+C--->D);
// when 2 instance of base class are present in the derived class
// B drives A,C derives A and D derives B+C
// Now D has 2 instance of A

class A{
public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua"<<endl;
    }
     
     void show(){
        cout<<a_ka_public<<endl;
     }
};




class B: virtual public A{
public:
    int b_ka_public;
    B(){
        cout<<"b ka constructor call hua"<<endl;
    }
 
};

class C: virtual public A{
public:
    int c_ka_public;
    C(){
        cout<<"c ka constructor call hua"<<endl;
    }
     
};


class D: public B, public C{
public:
    int d_ka_public;

};

int main(){
    D d;
    d.a_ka_public=10;
    d.show();

}