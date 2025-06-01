#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    // cout<<fact;
   return fact;
}
int combination(int p, int r){
    if(p<r) return false;
    return (factorial(p)/(factorial(r)*factorial(p-r)));
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)<<endl;
    cout<<factorial(r)<<endl;
    cout<<n<<"c"<<r<<"="<<combination(n,r)<<endl;
}