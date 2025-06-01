// https://cses.fi/problemset/task/1634

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


//  this is same as ki purana questions i.e cses1 
// total deserd number me se coins ko minus minus krna hai taki zero aa sake 

vector<int>coins;
vector<int>dp(1000006,-2);
int f(int x){
    if(x==0)return 0;
    if(dp[x]!=-2)return dp[x];
    int result = INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(x-coins[i]<0)continue;
        result=min(result, f(x-coins[i]));
    }
    if(result==INT_MAX)return dp[x]=INT_MAX;
    return dp[x]=1+result;

}
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        coins.push_back(num);
    }
    int ans=f(x);
    if(ans==INT_MAX)cout<<"-1";
    else cout<<ans<<"\n";
    return 0;
}
// question baesd selection 
// INT_MAX yani kabhi bhi compute nahi ho paya
// -2 ka matlab assigned hi nahi hua uske under 
