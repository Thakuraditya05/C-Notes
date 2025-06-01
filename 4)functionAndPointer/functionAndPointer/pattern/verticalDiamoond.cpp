//     *
//    **
//   ***
//  ****
//   ***
//    ** 
//     *
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m=0;
    int n;
    cin>>n;//4
    n=n*2-1;//
    for(int i=1;i<=n;i++){ 
        if(i<=4) m=i; //
        else m= n-i+1;//
        for(int j=1;j<=4-m;j++){  
            cout<<"   ";
        }
        
        for(int j=1;j<=m;j++){  
            cout<<" * ";
        }
        cout<<endl; 
    } 
}
