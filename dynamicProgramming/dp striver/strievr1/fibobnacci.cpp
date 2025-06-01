// 0 1 1  2 3 5 8 13 21 
// f(n)=f(n+1)+f(n+2)

// recusrsive soln looks like 
// f(n){
//     if(n<=1)return n;
//     return f(n+1)+f(n+2)
// }
// draw recusion tree

// due to overlapping and recommputation of subb prbleum 
// we do memozation ===== tend to store the value of subprobleum in array 

// step to convert pure recursive to memoization recursive
// 1st check base case 
// check if there exists any value for that n or not if yes then return or if not then comppute it and store it in dp arrays at same nth locaton 


// memozation top to bottom(answer required  (to the)---> <----(then)base case case )
#include<iostream>
#include<vector>
using namespace std;
int f(int n,vector<int>&dp){
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}
int main(){
    int n=5;
    vector<int>dp(n+1,0);
    cout<<f(n,dp);
    return 0;
}
// tc=o(n)
// sc=(n)+(n)



// tabulation method 
#include<iostream>
#include<vector>
using namespace std;

int f2(int n, vector<int>& dp) {
    dp[0] = 0;
    dp[1] = 1;  
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2]; // Fibonacci relation
    }
    return dp[n]; // Return the nth Fibonacci number
}

int main() {
    int n = 5; // Example Fibonacci index
    vector<int> dp(n + 1, 0); // Create a vector to store Fibonacci numbers
    cout << f2(n, dp); // Output the nth Fibonacci number
    return 0;
}
// tc=o(n)
// sc=o(n)



// space reduction 

#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n = 5; // Example Fibonacci index
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++){
        int curi=prev+prev2;
        prev2=prev;
        prev=curi;
    }
    cout<<prev;
    return 0;
}
// tc=o(n)
// sc=o(n)













