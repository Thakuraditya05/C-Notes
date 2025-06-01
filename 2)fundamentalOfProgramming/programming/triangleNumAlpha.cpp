//  1
//  A B
//  1 2 3
//  A B C D
//  1 2 3 4 5
#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<=4;i++){
        for(int j=1;j<=1+i;j++){
             if(i%2==0)cout<<j<<" ";
             else cout<<char(64+j)<<" ";
         }
         cout<<endl;

    }
}