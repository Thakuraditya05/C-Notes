#include <bits/stdc++.h>
using namespace std;
void oddNumbers(int a, int b){
     for(int i=a;i<=b;i++){
         if(i%2!=0){
             cout<<i<<endl;
         }
     }
}
int main(){
    int a,b;
    cin>>a>>b;
    oddNumbers(a,b);
        
}