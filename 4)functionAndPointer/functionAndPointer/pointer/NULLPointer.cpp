#include<bits/stdc++.h>
using namespace std;
int main(){
    // its main use linked list me dikhayi dega 
    int *ptr=NULL;
    int **ptr1=NULL;
    cout<<(&ptr)<<endl; // ptr jaha null ka store hai uska adress  
    // cout<<(*ptr)<<endl; // value dga but  ptr is a NULL pointer, and dereferencing a NULL pointer is not allowed. 
     
    cout<<(**ptr1);// is a NULL pointer, and dereferencing a NULL pointer twice (**ptr1) is invalid.
}