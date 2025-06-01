#include<iostream>
#include<cmath>
using namespace std;
// print factors of all numbers this is question 
// oder of n
bool isPrime(int num){
    if(num==1)return false;
    for(int i=num-1;i>1;i--){
        if(num%i==0) return false;
    }
    return true;
}
// TC=o(n)
// void printFactor(int num){
//     for(int i=1;i<num;i++){
//         if(num%i==0)cout<<i<<"  ";
//     }
//     cout<<endl;
// }

// TC=o(n^1/2)
// void printFactor2nd(int num){
//     for(int i=1;i<=sqrt(num);i++){
//          if(num%i==0 && i*i!=num)cout<<i<<" "<<num/i<<" "; 
//          if(i*i==num)cout<<" "<<i<<" ";
//     }  
//     cout<<endl;
// }
void printFactor2nd(int num){
    for(int i=1;i<sqrt(num);i++){
         if(num%i==0)cout<<i<<" ";; 
    }
    for(int i=sqrt(num);i>=1;i--){
         if(num%i==0)cout<<num/i<<" ";; 
    }
    cout<<endl;
}
int main(){
    int num=9;
    // printFactor(num);
    printFactor2nd(num);
}