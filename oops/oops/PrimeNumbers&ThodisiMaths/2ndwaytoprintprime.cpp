#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
    if(num==1)return false;
    for(int i=num-1;i>1;i--){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    int num=9;
    cout<<isPrime(num);
}