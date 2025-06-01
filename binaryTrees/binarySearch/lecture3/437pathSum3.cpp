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
// 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        void helper(TreeNode* root,int sum,int &count){
        if(root==NULL)return;
        if(root->val==sum){
            count++;
        }
        helper(root->left,sum-(root->val),count);
        helper(root->right,sum-(root->val),count);
    }
    int pathSum(TreeNode* root, int targetSum) {  //to add the sums of every nodePath
        if(root==NULL)return 0;

        int count=0;
        helper(root,targetSum,count);
        count += (pathSum( root->left, targetSum)+pathSum( root->right, targetSum));
        return count;
    }
};





// type casted to long long 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        void helper(TreeNode* root,long long  sum,int &count){
        if(root==NULL)return;
        if((long long)(root->val)==sum){
            count++;
        }
        helper(root->left,sum-(long long)(root->val),count);
        helper(root->right,sum-(long long)(root->val),count);
    }
    // issko as a recusion use kr lo kyo ki 
    int pathSum(TreeNode* root, int targetSum) {  //to add the sums of every nodePath
        if(root==NULL)return 0;

        int count=0;
        helper(root,(long long)targetSum,count);
        count += (pathSum( root->left, targetSum)+pathSum( root->right, targetSum));
        return count;
    }
};