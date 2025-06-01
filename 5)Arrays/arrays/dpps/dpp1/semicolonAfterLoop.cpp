#include<bits/stdc++.h>
using namespace std;
int main(){
    int sub[50], i ;  // 50size 
    for ( i = 0 ; i <= 48 ; i++ ) ; //no wrok will be executed but  loop will run and at very last 
    //  its i=49<48 false loop breaks 
    {
    sub[i] = i ; //   i=49 
    cout<<sub[i]<<endl ;// 0----->48;
    }
 return 0;
 }