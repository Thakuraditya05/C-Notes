#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;
bool isPrime(int num){
    if(num==1)return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    vector<vector<int>>v={{1,2,3},{5,6,7},{9,10,11}};
    int m=INT_MIN;
    for(int i=0;i<v.size();i++){
         if(isPrime(v[i][i])){
            m=max(m,v[i][i]);
         }
         if(isPrime(v[i][v.size() - i - 1])){
            m=max(m,v[i][v.size() - i - 1]);
         }
    }
    cout<<"max"<<m;
}