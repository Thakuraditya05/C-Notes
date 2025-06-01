#include<bits/stdc++.h>
using namespace std;

void factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
        cout<<fact<<endl;
    }
    
}


int main(){
    int a=5;
    factorial(a);
}

 