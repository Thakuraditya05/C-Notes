// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// // freind function classA and Class B hai and B, A ko inHerit Kr raha hai to B Portected and Public ko access kr skta hai A ke varibles Me, an
// // /class A{
//     //       //aagar yaha freind function ko dalat hu to wwo private ko bhi access krwa dega 
// // }
// //class B: A{
// //     // public and Protected accessable hota hai 
// // }
// // int main(){
// //     keval public hi accessable hote hai  
// // }
// class A{
//     int a_private =10;//let initialize for an instance 
// public:
//     friend void show(A &a);//issko under declare kr ke define nahi krte hai/(wasie kr skte hai )
//     void show2(){
//         cout<<a_private<<endl;
//     }
// };
// void show(A &a){
//     a.a_private=20;  //ye friend function ke karan object ka part se htt gaya hai ab 
//     // object ke part nahi hai ye class ka part bn gay hai(mtlab globaly declared ho chuka hai )
//     cout<<a.a_private<<endl;
// }
// int main(){
//     A a;
//     a.show2();
//     show(a);
// }


#include<iostream>
#include<vector>
#include<string>
using namespace std;
// bs operature ka matlab change karenge alag alag operture ke liye alag alag chhheeze execute hongi 
// 

// operture overloading
// <return_type> operature <operture>(){
//             -----
// }
// yaha pr deafuullt operature ka matlab change kr diay hmm logo ne mil kr 
// but abhi bhi kuch operture ka matlab change nahi kr skta hu
// jaise .(dot operature access)    ?:(conditinal operature)  ::(Scope rresolution ko bhi )  sizeOf(issko bhi deafult behavier ko change nahi kr skta hu) 

class ComplexNumber {
public:
    int imaginary;
    int real;
private:
    int pvt;

    // Function to add two complex numbers
    ComplexNumber add(ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = this->imaginary + c1.imaginary;  // Adding imaginary parts
        c3.real = this->real + c1.real;  // Adding real parts
        return c3;
    }


    ComplexNumber operator +(ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = this->imaginary + c1.imaginary;  // Adding imaginary parts
        c3.real = this->real + c1.real;  // Adding real parts
        return c3;
    }


    ComplexNumber operator -(ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = this->imaginary - c1.imaginary;  // Adding imaginary parts
        c3.real = this->real - c1.real;  // Adding real parts
        return c3;
    }
    // friend keyword ka use kr ke class bhi bana skte hai alng with function
     friend ComplexNumber operator *(ComplexNumber &c1,  ComplexNumber &c2);
     friend class primeNumber;// baad me declare kkr denge 
    

};




ComplexNumber operator *(ComplexNumber &c1,  ComplexNumber &c2){
        ComplexNumber c3;
        c3.imaginary =  c2.imaginary *c1.imaginary;  // Adding imaginary parts
        c3.real =  c2.real * c1.real;  // Adding real parts
        return c3;
}






// // baat itni hi  hai ki friend class ke under defined hone ke baad wo private ko access kr skta hai 

// class primeNumber{
//     void show(ComplexNumber &c){
//             c.pvt=56;
//     }
// };
// //  declare under kr dete hai but defined bahar krte hai 

int main(){
     ComplexNumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary=200;
    a2.real=15;
// print thier addition 
    

// by function 

    // ComplexNumber a3 = a1.add(a2);
    // cout << "Real part: " << a3.real << endl; //   
    // cout << "Imaginary part: " << a3.imaginary << endl;
    // ComplexNumber a4=a1+a2;
    // cout << "Real part: " << a4.real << endl;   
    // cout << "Imaginary part: " << a4.imaginary << endl;
    // ComplexNumber a5=a1-a2;
    // cout << "Real part: " << a5.real << endl;   
    // cout << "Imaginary part: " << a5.imaginary << endl;
    // ComplexNumber a6=a1*a2;
    // cout << "Real part: " << a6.real << endl;   
    // cout << "Imaginary part: " << a6.imaginary << endl;


    ComplexNumber c3;
    c3=a1*a2;
//   affter applying freind function;       
    cout<<c3.real<<"   "<<c3.imaginary<<endl;

// frind ka use kr ke class bhi bana skte hai 


    
}