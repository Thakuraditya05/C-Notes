// m-1------------------------------------------------------------------------------------------------------------------------------------------------------------------------>
//  arr={3,2,4,5,2,8,1,2,7}              k=9;                                                        
//  preSum={3,5,9,14,16,24,25,27,34}   
//  for(preSum){
//  if(number<9(k))   kuch nahi krna hai hame 
//  if(number==9(k)) count ++  
//  if(number>9(k))  binary search (to get 14(i-9(k) --->0 to i )and find if find then count ++ --->in this case our sbb array will be j to i ===>j=5 and i==14 in arr
//  (16(i)-9)=7 BS(0 to i to get 7) if we find  then count ++  
//  tc===o(nlog(n));
//  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------->





 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
// m-2
// arr={3,2,4,5,2,8,1,2,7}              k=9;                                                        
// preSum={3,5,9,14,16,24,25,27,34}   
// set<in>s()-->if(k- preSum )if exists then  count++ else onlu push in set 
#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int>pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=arr[i]+pre[i-1];
        }
        unordered_set<int>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(pre[i]<k)s.insert(pre[i]);
            else if(pre[i]==k){
                s.insert(pre[i]);
                count++;
            }
            else {
                int rem=pre[i]-k;
                if(s.find(rem)!=s.end())count++;
                s.insert(pre[i]);
            }
        }
        return count;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------->




// m-3                    
// arr={3,2,4,5,2,8,1,2,7}              k=9;                                                        
// preSum={3,5,9,14,16,24,25,27,34}   
// 
// set<in>s()-->if(k- preSum )if exists then  count++ else onlu push in set 
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int>pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=arr[i]+pre[i-1];
        }
        unordered_set<int>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k){
                count++;
            }
            int rem=pre[i]-k; // {1 -1 1}
            if(s.find(rem)!=s.end())count++;
            s.insert(pre[i]);
        }
        return count;
    }
};




// method two to resolve probleum of -ve number 
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int>pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=arr[i]+pre[i-1];
        }
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k){
                count++;
            }
            int rem=pre[i]-k; // to solve the probleum {1 -1 1}
            if(mp.find(rem)!=mp.end())count+=mp[rem];
            mp[pre[i]]++;
        }
        return count;
    }
};







