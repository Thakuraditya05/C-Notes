#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//ek arrray ke saare subsert bana lo jahe fir unn subset ko element kr do jisme adjesecnt elemnt aaraha hae hai


// jb isska dry run kar rahe honge issme ek cheez dhyan denge ki 
// jb function cll kar rahe haoe hai to arrray same rahega but index 
// change ho rahi hogi yani bs index hi dynamic factor hai 
// recurance banalo jo ki important hai ----->isski ko kahte hai state 
// of sub probleum 

// choti subprobleum ka sloution ka use krke bade subprobleum ka ans built kr pate ho 
// optimally to ussme optimal sub data exists krta hai 

class Solution {
    public:
        int f(vector<int>& arr, int i){
            if(i==arr.size()-1) return arr[i];
            if(i==arr.size()-2)return max(arr[i],arr[i+1]);
            return max(arr[i]+f(arr,i+2),0+f(arr,i+1));
        }
        int rob(vector<int>& arr) {
            return f(arr,0);
        }
    };
    
    
    // dp lagate samay ek cheez notice kr skte hai ki no. o
    // of i decide kr raha hai 

    // dp degree  == sttate varbale 
        // dp lagate samay ek cheez notice kr skte hai ki no. o
    // of i decide kr raha hai ek particular value of idx 
    
class Solution {
    public:
        vector<int>dp;
        int ftd(vector<int>arr,int i){
           if(i==arr.size()-1) return arr[i];
           if(i==arr.size()-2)return max(arr[i],arr[i+1]);
            if(dp[i]!=-1)return dp[i];
            return dp[i]=max(arr[i]+ftd(arr,i+2),0+ftd(arr,i+1));
        }
        // int f(vector<int>& arr, int i){
        //     if(i==arr.size()-1) return arr[i];
        //     if(i==arr.size()-2)return max(arr[i],arr[i+1]);
        //     return max(arr[i]+f(arr,i+2),0+f(arr,i+1));
        // }
        int rob(vector<int>& arr) {
            // return f(arr,0);
            dp.clear();
            dp.resize(105,-1);
            return ftd(arr,0);
        }
    };


    // tabulation method me ---> kon kon si cheeze padi honi chahiye taki badi  sub probleum usski help se solve ho jaye 
// jaise recursive solution bana lo uske baad base ka case kr lo 
// mini cheez calculate use kr lena 


// dp ka psedo code likhte samaye sirf wahi parameter likhte hai jo change ho raha hota hai
// parameter ==>state variable hai 

// tabulation me ulta chalna orr sirf ek ghar hota to lutna padta 
// 2 hote to maximum 
// 3 hote to ===> wo wala plus othindex (i+2) ORR sirf isske pahle wala i.e i+1
// 4 hota to ----> wo wala plus i+2 index orr just isske pahle i.e i+1
// dp[i] i ke pahle tk ka besrt profit 
// final ans dp[0]
class Solution {
    public:
        int fbu(vector<int>&arr){
    
            int n=arr.size();
    
            if(n==1)return arr[0];
            vector<int>dp;
            dp.clear();
            dp.resize(n);
            // base case 
            dp[n-1]=arr[n-1];
            dp[n-2]=max(arr[n-2],arr[n-1]);
            for(int i=n-3;i>=0;i--){
                dp[i]=max(arr[i]+dp[i+2],0+dp[i+1]);
            }
            return dp[0];
        }
        int rob(vector<int>& nums) {
            return fbu(nums);
        }
    };
    
    // space optimization 