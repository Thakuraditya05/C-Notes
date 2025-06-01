// https://cses.fi/problemset/task/1633

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#define mod 100000007;
#define ll long long int 
using namespace std;
vector<ll>dp(1000005,-1);
ll  ftd(int n){
    if(n==0)return 1;
    if(dp[n]!=-1)return dp[n];
    ll sum=0;
    for( int i=1;i<=6;i++){
        if(n-i<0)break;
        // sum+=f(n-i);
        sum = (sum % mod + ftd(n-i) % mod) % mod;
    }
    return dp[n]=sum%mod;
}

ll  fbu(int n){
    dp[0]=1;
    for(int k=1;k<=n;k++){
        ll sum =0;
        for(int i=1;i<=6;i++){
            if(k-i<0)break;
            sum=(sum % mod + dp[k-i]%mod)%mod;
        }
        dp[k]=sum % mod;
    }
    return dp[n];
}



int f(int n){
    if(n==0)return 1;
    int sum=0;
    for(int i=1;i<=6;i++){
        if(n-i<0)break;
        // sum+=f(n-i);
        sum = ( sum % mod + f(n-i) % mod) % mod;
    }
    return sum % mod;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    cout<<ftd(n)<<endl;
    return 0;
}
