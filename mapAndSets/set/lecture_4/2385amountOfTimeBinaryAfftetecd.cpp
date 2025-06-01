// let assume that ki root hamara afftected tha and waha se probleum originatee hoti hai 
// to level order traversing se hm every singlle seconde me uske children affteion bata dete 


// proper BFS breath for search queue --->isski thinking ki agar root affcted hota to kya krte hmm uss scene me 
// next address jo affect hoga wo depend kr raha hai next level pe 
// ye question intention deta hai level order traversal ki ki kisi Node ko root bana ke level kaise kare 
// find tree Node 



// step 1 find the Node with given value start 

//step 2 mark the  parent Node  using hash map
// 



// 


#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
#include<climits>
#include<unordered_map>

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
    TreeNode* first=new TreeNode(0);
    void markParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent){
        if(root==NULL)return;
        if(root->left) parent[root->left]=root;
        if(root->right) parent[root->right]=root;
        markParent(root->left,parent);
        markParent(root->right,parent);
    }
    void find(TreeNode* root, int start){
        if(root==NULL)return;
        if(root->val==start){
            first=root;
            return;
        }
        find(root->left,start);
        find (root->right,start);

    }
    int amountOfTime(TreeNode* root, int start) {
        // TreeNode* first=find(root,start); // infection kaha sen start ho raha hai ye pata kara 
        find(root,start);
        unordered_map<TreeNode*,TreeNode*>parent; // parents node mark karo 
        markParent(root,parent); 
        // step 3
        unordered_set<TreeNode*>isInfected;
        isInfected.insert(first);
        // step 4 with step 3
        queue<pair<TreeNode*, int>>q;
        q.push({first,0});
        // yaha bfs chalega 
        int maxLevel=INT_MIN;
        while(q.size()>0){
            pair<TreeNode*,int>p=q.front();
            q.pop();
            int level=p.second;
            maxLevel=max(maxLevel,level);
            TreeNode* temp=p.first;
            // agar parent afftecd nahi to unko daalo 
            // if left child is Not affceted to unko daalo 
            // if right child is not affcted
            if(temp->left){
                if(isInfected.find(temp->left)==isInfected.end()){
                    q.push({temp->left,level+1});
                    isInfected.insert(temp->left);
                }
            }
            if(temp->right){
                if(isInfected.find(temp->right)==isInfected.end()){
                    q.push({temp->right,level+1});
                    isInfected.insert(temp->right);
                }
            }
            if(parent.find(temp)!=parent.end()){
                if(isInfected.find(parent[temp])==isInfected.end()){
                    q.push({parent[temp],level+1});
                    isInfected.insert(parent[temp]);
                }
            }
            
        }
        return maxLevel;

    }
};





















