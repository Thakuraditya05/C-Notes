//  ******
//  *    *
//  *    *
//  ******

#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){  // 1 2 
       for(int j=1;j<=6;j++){  //  1  6  1 6  
           if(i==1||i==4)cout<<" * "; // * * * * * * *
           else {
            if(j==1 || j==6)cout<<" * ";
            else cout<<"   ";
           }
       }
       cout<<endl;  
    } 
}