// ancesters -->sortest distance b/w root and that perticular node 
// level->generation
// in every segment we have some left children and some right clidren and  ((left children->val )<(right clidren->val))
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
            this->left=NULL;
            this->val=val;
            this->right=NULL;
    }
};
int  sum(Node* root){
    if(root==NULL)return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int  Size(Node* root){
    if(root==NULL)return 0;
    return 1 + Size(root->left) + Size(root->right);
}
int  maxInTree(Node* root){
    if(root==NULL)return INT_MIN;
    return max(root->val,max(maxInTree(root->left),maxInTree(root->right)));
}
int  levels(Node* root){
    if(root==NULL)return 0;
    return 1+ max(levels(root->left),levels(root->right));
}
int  height(Node* root){
    return levels(root)-1;
}


// preOreder traversal
void displayPreOrder(Node* root){  // root left right  1 2 4 8 5  9 10 3 6 11 7 
    if(root==NULL)return; 
    cout<<root->val<<"  ";
    displayPreOrder(root->left);
    displayPreOrder(root->right);
}
// inoderTraversal
void displayInOrder(Node* root){  // left root right 4 2 5 1 6 3 7  // hrr right call ke pahle printing kr do ye shortuc hai isskka 
    if(root==NULL)return;
    displayInOrder(root->left);
    cout<<root->val<<"  ";    
    displayInOrder(root->right);
}
// postOreder traversal
void displayPostOrder(Node* root){  // left right root 4 5 2 6 7 3 1 // dono calls khatam kr dene ke baad calling hogi bhai 
    if(root==NULL)return;
    displayPostOrder(root->left);
    displayPostOrder(root->right);
    cout<<root->val<<"  ";    
}


int main(){ 
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    Node* f= new Node(60);
    int s=0;
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    displayPreOrder(a);
    cout<<endl;
    displayInOrder(a);
    cout<<endl;
    displayPostOrder(a);
    cout<<endl;

}


