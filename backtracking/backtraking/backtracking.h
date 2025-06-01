#ifndef backtracking_H  // Include guard to prevent multiple inclusions
#define backtracking_H

 

#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<unordered_set>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif // TREENODE_H
