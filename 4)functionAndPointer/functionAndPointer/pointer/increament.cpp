#include<bits/stdc++.h>
using namespace std;
int main(){
   int x=5;
   int* p=&x;
   cout<<*p<<endl;
    (*p)++;   //*p=*p+1
    cout<<(*p)<<endl; // 5
    cout<<p<<endl; // 0x62ff08
    *p++;//  * ptr =ptr+1
    cout<<p<<endl;  // 0x62ff0c
    cout<<(*p)<<endl;
}