#include<bits/stdc++.h>
using namespace std;

class Calculator{  
public:  
  //int a=100; //data member 
  // int b=100;
  int a; //data member 
  int b;
// protected:--->inherit kr skte but bahar se access nahi kkr skte 

  void add(){ // member function  
    cout<<a+b<<endl;
  }
  void subtract(){
    cout<<a-b<<endl;
  }
  void multiply(){
    cout<<a*b<<endl;
  }
  void division(){
    cout<<a/b<<endl;
  }

};

int main(){
  Calculator cal; ; // ek bject hai    whose data type is defined at above 
   cal.a=10;
   cal.b=7;
   cal.add();
   cal.subtract();
   cal.multiply();
   cal.division();
   

    
}