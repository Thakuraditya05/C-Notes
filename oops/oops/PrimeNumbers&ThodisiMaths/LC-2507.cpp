#include<iostream>
#include<cmath>
using namespace std;
// do this question as a rivision marks 
bool isPrime(int num){
    if(num==1)return false;
    for(int i=num-1;i>1;i--){
        if(num%i==0) return false;
    }
    return true;
}

int smallestValue(int n){
    if(isPrime(n))return n;
    int sum=0;
    // kaam
    for(int i=1;i<sqrt(n);i++){ // sqrt(n) 
         if(n%i==0 && isPrime(n)){
            int m=n;
            while(m%i==0){ //log(m)
                sum+=i;
                m/=i; //m me se do hata do 
            }
         } 
    }
    for(int i=sqrt(n);i>=1;i--){
         if(n%i==0 &&isPrime(n/i)){
            int m=n;
            while(m%(n/i)==0){
                sum+=(n/i);
                m/=(n/i); //m me se do hata do 
            }
         }  
    }
    return sum;
}

int main(){
cout<<smallestValue(3); //ecept 4;
}