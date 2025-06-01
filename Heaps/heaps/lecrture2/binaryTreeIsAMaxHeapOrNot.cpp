// to check 
// codition 1----all decendants of any node should be smaller be smallers 
// root.val> root.right.val and and root.val>root.left.val
// 

// condition 2 --- tree should be complete binary tree 
// to check complete bt or not 
// level order traversal ki technique use karenge queue use karo 
// root se leke sare elemnt uske under daalo and jaise null aajaye queue me re traverse karo and if uske under null ke alwa kuch orr nikla to compete binary tree nahi hai 


// if (condition 1 and and condition 2 ) true 

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};

int sizeOfTree(Node* root){
    if(root==NULL)return 0;
    return 1+ sizeOfTree(root->left)+sizeOfTree(root->right);
}

bool isCBT(Node* root){
    int size=sizeOfTree(root);
    int count=0;
    queue<Node*>q;
    q.push(root);
    while(count<size){
        Node* temp=q.front();
        q.pop();
        count++;
        if(temp){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    if(q.size()>0){
        Node* temp= q.front();
        if(temp)return false;
        q.pop();
    }
    return true;
}

bool isMax(Node* root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val < root->left->val)return false;
    if(root->right!=NULL && root->val < root->right->val)return false;
    return isMax(root->left) && isMax(root->right);
}

int main(){
    Node* root = new Node(10);   // Root node with value 10
    Node* node1 = new Node(5);    // Node with value 5
    Node* node2 = new Node(15);   // Node with value 15
    Node* node3 = new Node(3);    // Node with value 3
    Node* node4 = new Node(7);    // Node with value 7
    Node* node5 = new Node(12);   // Node with value 12
    Node* node6 = new Node(18);   // Node with value 18
    Node* node7 = new Node(2);    // Node with value 2
    Node* node8 = new Node(6);    // Node with value 6
    Node* node9 = new Node(13);   // Node with value 13

    // Creating the tree structure
    root->left = node1;           // 5 is the left child of 10
    root->right = node2;          // 15 is the right child of 10

    node1->left = node3;          // 3 is the left child of 5
    node1->right = node4;         // 7 is the right child of 5

    node2->left = node5;          // 12 is the left child of 15
    node2->right = node6;         // 18 is the right child of 15

    node3->left = node7;          // 2 is the left child of 3
    node4->left = node8;          // 6 is the left child of 7

    node5->right = node9;         // 13 is the right child of 12
     
    // solution 
    if(isCBT(root) && isMax(root))cout<<"treeNode is maxHead";
    else cout<<"tree is not maxheap";
}    

