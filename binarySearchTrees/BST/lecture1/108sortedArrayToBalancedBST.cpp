#include "../TreeNode.h"
// jitne left subtree hai orr jitne right subtree hai usme max ka differance one ka ho bs balance bst hota hai ye 
// {1 2 3 }==>isse 5 bst hi bn skte hai keval jisem se keval ek bst hoga 
// {1 2 3 4 5 6 7}==>{4 26 1357} ye binary tree chalge bs 
// step 1 middle element root banega and uske baad left saare element uska left  part banega(by recussion) and uske left sare part  
// 

class Solution {
public:
    TreeNode* helper(vector<int>&arr,int lo,int hi){
        if(lo>hi)return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=helper(arr,lo,mid-1);
        root->right=helper(arr,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
            int n=arr.size();
            return helper(arr,0,n-1);  
    }

};
