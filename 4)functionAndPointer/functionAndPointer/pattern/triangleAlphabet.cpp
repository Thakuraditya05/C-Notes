//       A
//     A B
//   A B C
//  A B C D
#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){   
        for(int j=1;j<=4-i;j++){  
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){  
            cout<<char(64+j)<<" ";
       }
        cout<<endl;  
    } 
}