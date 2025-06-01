#include<iostream>
#include<vector>
#include<string>
using namespace std;


class A{
private:  //can not be accesses, can't be inheritteed 
    int a_ka_private;
protected: //can not be accesses,but  can  be inheritteed 
    int a_ka_protected;
public: //can  accesses and can be inheritteed 
    int a_ka_public;
};

class B :public A{  // a ke sare varibale public rahenge 
// public krne pr keval a ke protected and inherited wale hi aayenge
 // and aane ke baad wo public ho jayenge keavel b ke liye 

private:
    int b_ka_private;
protected: 
    int b_ka_protected;
public: 
    int b_ka_public;
    
// secuurity downgrade nahi hogi a ka protected protected hi rahega 
    void show(){
        // public A krne pr keval a ke protected and inherited wale hi aayenge 
        // and aane ke baad wo public ho jayenge 
        // a_ka_private
        // a_ka_public

    }
};

class D :protected A{ //a ke saare variable   protected rahenge 
private:
    int d_ka_private;
protected: 
    int d_ka_protected;
public: 
    int d_ka_public;
};

class E :private A{ // a ke saare variable  private rahenge 
// private krne pr keval a ke protected and public  wale hi aayenge
 // and aane ke baad wo private ho jayenge keavel E  ke liye  jahe wo waha public ho ya in protected  ho;
private:
    int e_ka_private;
protected: 
    int e_ka_protected;
public: 
    int e_ka_public;


    // kuch bhi accesble nahi hai class ke bahar jahe wo a ki cheeje ho ya 
};


// // whay all this things
//     class hacker{
//     private:
//     };
//     class Hacker2:public hacker{
//     // bacch gaye system is sduniya ke kyoo ki security dowgrade nahi ho skti hai 
//     }
// // 

// ---------------------------------------------------------------------------
// multi level Inheritance
class F:public B{
    
public:
    int f_ka_public;
};
// Vichel-->ElectriVicle--->2wheeler--->bike
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------

// multiple inheritance--->multiple parents(base class) and single child(single child)
// class G:public B, public A {
// };
// vichel, electric vixhel, superbike------>KAWASAKI NINJA
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// Hierarical Inheritance --->single  parents(base class) and multiple child(single child)
// vhicles--->Bike,SuperCar,Jeeptruck
// ---------------------------------------------------------------------------
// sabhi ko mila ke jo nayi class bnti hai wo hirerical hai 

// ---------------------------------------------------------------------------




int main(){
    A a;
    a.a_ka_public=20; 

    B b;
    b.a_ka_public=10;
    b.b_ka_public=20;

    E e;
    // e.a_ka_public=100; // nnon accesable bn gaya hai ab kyo ki private krke inherit kiya gaya hhai 
    e.e_ka_public=20;

}