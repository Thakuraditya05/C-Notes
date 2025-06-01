// greedy approch wo hoti hai jo just next approch me resultant 
// answer de rahi hoti hai but wo long term ke liye baneficial nahi 
// hoti hai 

// dp optimization technique hai khud me algo nahi hai 
// brute force optimization mostly is dp technique 
// mostly index based hogi 

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

#define inf INT_MAX
using namespace std;
int f(int n){
    if(n==0 || n==1)return 0;
    if(n==2 ||n==3 )return 1;
    return 1+min({f(n-1),(n%2==0)?f(n/2):inf,(n%3==0)?f(n/3):inf});


}
vector<int>dp;
int ftd(int n){  // top down solution 
    if(n==0 || n==1)return 0;
    if(n==2 ||n==3 )return 1;
    if(dp[n]!=-1)return dp[n]; // nth state is precomputetd 
    // if dp[n] is we 
    return dp[n]=1+min({ftd(n-1),(n%2==0)?ftd(n/2):inf,(n%3==0)?ftd(n/3):inf});


}


int fbu(int n){  // top down solution 
    
    
    // top down me subkuch peeche se calculatwd hona chhaiye 
    // to subkuch peeche wale calulate kar lo base case se 


    // time n and space n
    dp.clear();
    dp.resize(n+1,-1);
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++){
        dp[i]=min({dp[i-1],(i%2==0)?dp[i/2]:inf,(i%3==0)?dp[i/3]:inf});
    }
    return dp[n];
}


int main(){
    int n=15;
    cout<<f(n);
    dp.clear();
    dp.resize(1005,-1);
    cout<<ftd(n)<<"\n";
    

    cout<<fbu(n);


    return 0;
}