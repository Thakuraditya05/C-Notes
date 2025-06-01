#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num=9;
    int count=0;
    for(int i=1;i<num;i++){//o(n)
         if(isPrime(i))count++;//o(n*sqrt(n))
    }
    cout<<count;
    
}


