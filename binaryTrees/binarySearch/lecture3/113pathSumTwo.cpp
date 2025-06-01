// ek vecotr bana lo uske baad 
// hrr Node pe target value jayegi jiske under target- privious Node
//  leaf Node === last target value left at that Node 
// iss case me pass by  refreace karenge to dikkat ho jayegi pass by value krna padega 

#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
            this->left=NULL;
            this->val=val;
            this->right=NULL;
    }
};

class Solution {
public:
    void helper(TreeNode* root, vector<int>v, vector<vector<int>>&ans,int sum){
        if(root==NULL)return;
        string a=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            if(root->val==sum){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left,v,ans,sum-(root->val));
        helper(root->right,v,ans,sum-(root->val));
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(root,v,ans,targetSum);
        return ans;
    }
};