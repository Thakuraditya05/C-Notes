// ek maaths formula laga ke kr lo bahut asani se ho 
// m2 {-1,1,-2,2,-3,3,-4,4 }--->(k==3)===>{-1,1,-2,2,0,0,-1,1}===============>{2,1,1,2,0,0,2,1} important hai bhai ye question

#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
#include<climits>
#include<unordered_map>
// maps and maths question hai ye 
// 
using namespace std; 
class TreeNode{
public: 
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){

        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
         unordered_map<int,int>mp;
         for(int ele: arr){
            // ele=ele%k;
            ele=(((ele%k)+k)%k);
            mp[ele]++;
         }
         if(mp.find(0)!=mp.end()){
            if(mp[0]%2!=0)return false;
            mp.erase(0);
         }
         for(auto x:mp){
            int ele=x.first;
            int rem=k-ele;
            if(mp.find(rem)==mp.end())return false;
            if(mp[ele]!=mp[rem]) return false;
         }
         return true;
    }
};     
           
        
        
        
        
       
        
        