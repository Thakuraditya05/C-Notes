#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){ //sqrt(n)
if(n==0)return false;
// return (n==1)--->combination of two satement return true if satisfied and false if are not setisfied 
 
}
int main(){
    int num=9;
    int count=0;
    for(int i=1;i<num;i++){//o(n)
         if(isPrime(i))count++;//o(n*sqrt(n))
    }
    cout<<count;
    
}




