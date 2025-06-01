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
    ComplexNumber operator *(ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = this->imaginary  * c1.imaginary;  // Adding imaginary parts
        c3.real = this->real  * c1.real;  // Adding real parts
        return c3;
    }


};
// class ComplexNumber{
// public: 
//     int imaginary;
//     int real;

//     // ComplexNumber add(ComplexNumber &c1, ComplexNumber &c2){
//     //     ComplexNumber c3;
//     //     c3.imaginary=c1.imaginary+c2.imaginary;
//     //     c3.real=c3.real+c3.real;
//     //     return c3;
//     // };


//     ComplexNumber add(ComplexNumber c1){
//         ComplexNumber c3;
//         c3.imaginary=this->imaginary+ c1.imaginary;
//         c3.real=this->real + c1.real  
//         return c3;
//     };
 
// };

int main(){
     ComplexNumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary=200;
    a2.real=15;
// print thier addition 
    

// by function 

    ComplexNumber a3 = a1.add(a2);
    cout << "Real part: " << a3.real << endl; //   
    cout << "Imaginary part: " << a3.imaginary << endl;
    
    ComplexNumber a4=a1+a2;
    cout << "Real part: " << a4.real << endl;   
    cout << "Imaginary part: " << a4.imaginary << endl;

    ComplexNumber a5=a1-a2;
    cout << "Real part: " << a5.real << endl;   
    cout << "Imaginary part: " << a5.imaginary << endl;
    
    ComplexNumber a6=a1*a2;
    cout << "Real part: " << a6.real << endl;   
    cout << "Imaginary part: " << a6.imaginary << endl;


    
}