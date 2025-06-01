#include<iostream>
#include<cmath>
using namespace std;
// do this question as a rivision marks 

// 
// M-1
bool isPrime(int num){ //sqrt(n)
    if(num==1)return false;
    for(int i=num-1;i>1;i--){
        if(num%i==0) return false;

    }
    return true;
}
int main(){
    int num=9;
    int count=0;
    for(int i=1;i<num;i++){//o(n)
         if(isPrime(i))count++;//o(n*sqrt(n))
    }
    cout<<count;
    
}

// sieve of erathenessis;
// this is like the dp programming type in which we array of n size ===num(jaha ke under prime number ko niklane ke liye bola jayee )
// and jo jo prime hote jate hai unki jaga false set kr dte hai 
//m-2



