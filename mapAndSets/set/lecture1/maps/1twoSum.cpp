#include<iostream>
#include<unordered_map>
#include <vector>
#include <algorithm> // For sort
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int firstIndex=0;
        int secondIndex=0;
        for(int i=0;i<nums.size()-1;i++){  //
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    firstIndex=i;
                    secondIndex=j;
                }
            }
        }
        return {firstIndex,secondIndex };
    }

    sort(nums.begin(),nums.end());

};


// method two
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(m.find(rem)!=m.end()){
                ans.push_back(m[rem]);
                ans.push_back(i);
            }
            else m[nums[i]]=i;
        }
        return ans;   
    }

    

};






