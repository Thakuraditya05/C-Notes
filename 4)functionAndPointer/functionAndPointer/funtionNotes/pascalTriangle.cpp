#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
    if(num<=0) return 1;
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
     int num;
     cin>>num;
     for(int i=0;i<=num;i++){
       for(int j=0;j<=i;j++){
         cout<<combination(i,j)<<" ";
        } 
        cout<<endl;
     }



    //  question why we didnt run code from i=1 to num because 
    // 1 
    // 1 2
    // 1 3 3
    // 1 4 6 4
// now method 2
    for(int i=1;i<=num;i++){
       for(int j=0;j<i;j++){
        //  cout<<*((i+1)/(j+1))<<" ";
        } 
        cout<<endl;
     }
}    