#include<bits/stdc++.h>
using namespace std;
//  double pointer is used to store and address and it can also be used to acess some value which we will se in linked list 

int main(){
      
      int x=9; //some value
      int *ptr=&x;//adress of x
      int **ptr2=&ptr; // adress of *ptr 
      cout<<x<<endl; // 
      cout<<*ptr<<endl; //
      cout<<**ptr2<<endl;
      cout<<ptr2<<endl; //0x62ff04
      cout<<ptr<<endl; //0x62ff08
    
 }