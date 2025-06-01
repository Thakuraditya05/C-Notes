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
void displayTree(Node* root){
    if(root==NULL)return;
    cout<<root->val<<"  ";
    displayTree(root->left);
    displayTree(root->right);
}
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
int main(){ 
    Node* a= new Node(5);
    Node* b= new Node(4);
    Node* c= new Node(3);
    Node* d= new Node(2000);
    Node* e= new Node(1100);
    Node* f= new Node(1);
    int s=0;
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    displayTree(a);

    cout<<endl<<endl;
    cout<<sum(a)<<endl;
    cout<<Size(a)<<endl;
    cout<<maxInTree(a)<<endl;
    cout<<levels(a)<<endl;
    cout<<height(a)<<endl;
}


