// https://cses.fi/problemset/

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// lets apply brute force 
// dusari baat state of sub-varible ko defined krne ke loye ek hi state hai 
// bs yani 1 state dp 


vector<int> get_digits(int n){
    vector<int>result;
    while(n>0){
        if(n%10!=0)
            // n%10 is the last digits 
            result.push_back(n%10);
         
        n/=10;
    }
    return result;
}

int f(int n){
    if(n==0)return 0;
    if(n<=9)return 1;
    vector<int>d=get_digits(n);

    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
        result = min(result,f(n-d[i]));
    }
    return 1+result;
}




int main(){
    int n;
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}



// dp 

vector<int> get_digits(int n){
    vector<int>result;
    while(n>0){
        if(n%10!=0)
            // n%10 is the last digits 
            result.push_back(n%10);
         
        n/=10;
    }
    return result;
}
vector<int>dp;
int ftd(int n){
    if(n==0)return 0;
    if(n<=9)return 1;


    if(dp[n]!=-1)return dp[n];

    vector<int>d=get_digits(n);
    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
        result = min(result,ftd(n-d[i]));
    }

    return dp[n]=1+result;
}




int main(){
    int n;
    cin>>n;
    dp.resize(1000001,-1);
    cout<<f(n)<<"\n";
    return 0;
}





// this is dp access 

vector<int> get_digits(int n){
    vector<int>result;
    while(n>0){
        if(n%10!=0)
            // n%10 is the last digits 
            result.push_back(n%10);
         
        n/=10;
    }
    return result;
}
vector<int>dp;
int fbu(int num){
   dp[0]=0;
   for(int i=1;i<=9;i++)dp[i]=1;

   for(int n=10;n<=num;n++){
    // n is state 
    // calc dp[n]
    vector<int>d=get_digits(n); // d as vector to store digit 
    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
        result = min(result,dp[n-d[i]]);
    
    }

    return dp[n]=1+result;
}




int main(){
    int n;
    cin>>n;
    dp.resize(1000001,-1);
    cout<<fbu(n)<<"\n";
    return 0;
}