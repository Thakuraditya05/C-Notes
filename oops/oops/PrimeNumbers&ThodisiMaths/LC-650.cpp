#include<iostream>
#include<cmath>
using namespace std;
// 2 key boarrd --->prime number hi minimum movies hoga that is cpppppppp--->prime 
// ulta shocho iss case me ki 20 chahie to uske pahle 10 and 10 ke liye 5 and punch ho hi nahi payega 


bool isPrime(int num){  // o(sqrt(n));
    if(num==1)return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}

int gd(int n){
    // for(int i=n/2;i>=1;i--){
    //     if(n%i==0) return i;
    // }

    for(int i=2;i<=sqrt(n);i++){  //hame smallest factor chahiye // o(sqrt(n));
        if(n%i==0) return (n/i);
    }
    return 1;
}

int minSteps(int n){//o(log(n));
    int count=0;
    while(n>1){
        if(isPrime(n)){ //o(sqrt(n));
            count+=n;
            break;
        }
        int hf=gd(n);//o(sqrt(n)); kyo ki factors reduce ho ho kr aayenng to yahi hona hai 
        count+=(n/hf);
        n=hf;  ///isske karan log rithm division ho raha hai 
    }
    return count;
}
int main(){
    int n=90;
    cout<<minSteps(n);  //o(n);

}


// 
//m-2
//

int gd(int n){
    for(int i=n/2;i>=1;i--){
        if(n%i==0) return i;
    }
    
    return 1;
}

int minSteps(int n){
    int count=0;
    while(n>1){
        int hf=gd(n);
        count+=(n/hf);
        n=hf;  ///isske karan log rithm division ho raha hai 
    }
    return count;
}
int main(){
    int n=90;
    cout<<minSteps(n);
}