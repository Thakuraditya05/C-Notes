// bst left chote and righte bade 
// ek bst ke kayi sari max and min heap bn skte hai

// inoredr --- bst 


// ek kaam 
// bst ko ioredr traversal array me le jaau o(n) o(n)(s t )
// uss array ko heapify kr du and and uske baad 
// uss hepfy array ko tree me convert kr du level wise traversal se


// alternative of heapify
// ek array lo decrease order me sort kr do 
// level wise traversal se usko binary tree bana do 

// 2nd method (convertBstToMaxHeap and and LST>RST) 
// bst ko inorder me convert karo --> deacreaseing array me convert kr do o(n) o(n)(s t )
// same tree me preorder traversal karo and hrr element ko array i(0 to  n)'th  se replace kr do o(n) o(n)

#include<iostream>
#include<vector>
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
void print(vector<int>& arr ){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void inorder(Node* root , vector<int>& arr ){
     if(root==NULL) return;
     inorder(root->right,arr);
    arr.push_back(root->val);
    inorder(root->left,arr);

}

void preorder(Node* root,vector<int>&arr,int &i){
    if(root==NULL)return;
    // root->val=arr[i];i++;
    root->val=arr[i++];
    preorder(root->left,arr,i);
    preorder(root->right,arr,i);
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
     

    vector<int>arr;//reverse inorder 
    inorder(root,arr);
    print(arr);
    int i=0;
    preorder(root,arr,i);
    // print tree 
}























































