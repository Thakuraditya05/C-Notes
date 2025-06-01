// greedy will not be best approach and also will not written sahi answer 
// greedy approch 1st step may be minimum but furter we may get lost 


// recursive reletaions
// f(nd){    minimum energy required to reach n-1 from 0
//     if(nd==0)return 0;
//     left=f(nd-1)+abs(a[nd]-a[nd-1]);
//     if(nd>1)then
//     right=f(nd-2)+abs(a[nd]-a[nd-2]);
//     // return min(left,right);
// }
// tc=o(N)
// sc=o(W)+O(W)
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int f(int ind, vector<int>&height){
    if(ind==0)return 0;
    int left = f(ind-1,height)+abs(height[ind]-height[ind-1]);
    int right= INT_MAX;
    if(ind>1)right = f(ind-2,height)+abs(height[ind]-height[ind-2]);
    return min(left,right);

}

int main(){
    vector<int>height={};
    int ind=sizeof(height)/4;
    cout<<f(ind,height);
}
// tabulation (start from bottom go up )
//  observe the recursion base case fill first in DP Array/vector of that index

int f2(int ind, vector<int>&height,vector<int>&dp){
    if(ind==0)return 0;

    if(dp[ind]!=-1)return dp[ind];
    int right =INT_MAX;
    int left = f(ind-1,height)+abs(height[ind]-height[ind-1]);
    if(ind>1)right = f(ind-2,height)+abs(height[ind]-height[ind-2]);
    return dp[ind]=min(left,right);

}

int main(){
    vector<int>height={};
    int n=sizeof(height)/4;
    vector<int>dp(n+1,-1);
    cout<<f2(n,height,dp);
}


// now lets change the recursion to the memoization 
// memozation   == looks which parameters are changing (here only index is changeing)

// int dp[n]=0;
// dp[0]=0;
// for(1 to n-1){
//     fs=dp[ind-1]+abs(a[ind]-a[ind-1]);
//     if(i>1)
//     ss=dp[ind-2]+abs(a[ind]-a[ind-2]);
//     dp[ind]=min(fs,ss);  
// }

int f2(int ind, vector<int>&height,vector<int>&dp){
    
}

int main(){
    vector<int>height={};
    int n=sizeof(height)/4;
    vector<int>dp(n+1,-1);
    cout<<f2(n,height,dp);
}

// space optimization but just takking couple of variabble 
// just taking pev and prev2 as a variable 
int main(){
    vector<int>height={30, 10, 60, 10, 60, 50};
    int n=sizeof(height)/4; // mera frog yaha pe hai 
    int prev=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int fs=prev+abs(height[i]-height[i-1]);
        int ss=INT_MAX;
        if(i>1)ss=prev2+abs(height[i]-height[i-2]);
        int curi=min(fs,ss);
        prev2=prev;
        prev=curi;
    }
    return prev; 
}























































