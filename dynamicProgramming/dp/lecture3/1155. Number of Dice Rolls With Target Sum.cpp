// 1 jb n==0 and t==0 tb ek tarika hai 
// 2 hrr baar k change hoga yani number of faceses and sum ki value 
// die throw ke baad decrese hoti jaygi yani wo bhi change hoga 
// yani state of variable ko do log defined varible defined ho raha hai 
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

#define ll long long int
#define mod 1000000007
using namespace std;

class Solution {
public:
    ll f(int n,int k,int t){
        if(n==0 and t==0)return 1;// base 
        if(n==0) return 0; // koi 
        // if(dp[n][t]!=-1) return dp[n][t]; //
        ll sum=0;
        for(int v=1;v<=k;v++){
            if(t-v<0)continue;
            sum=((sum % mod )+f(n-1,k,t-v) % mod )%mod;
        }
        return sum % mod ;
    }
    int numRollsToTarget(int n, int k, int target) {
        return f(n,k,target);
    }
};



