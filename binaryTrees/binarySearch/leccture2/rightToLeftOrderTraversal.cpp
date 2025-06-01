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
// reverse nth order 
int  levels(Node* root){
    if(root==NULL)return 0;
    return 1+ max(levels(root->left),levels(root->right));
}
// not optimised 
// void nthLevel(Node* root,int curr, int level){  // root left right  1 2 4 8 5  9 10 3 6 11 7 
//     if(root==NULL)return; 
//     if(curr==level)cout<<root->val<<"  ";
//     nthLevel(root->left,curr+1,level);
//     nthLevel(root->right,curr+1,level);
// }
// optimised
void nthLevel(Node* root,int curr, int level){  // root left right  1 2 4 8 5  9 10 3 6 11 7 
    if(root==NULL)return; 
    if(curr==level){
        cout<<root->val<<"  ";
        return;
    } 
    nthLevel(root->right,curr+1,level); // change in this only 
    nthLevel(root->left,curr+1,level);  //here also change 
}
void levelOrder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
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
    levelOrder(a);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    nthLevel(a,1,1);
    nthLevel(a,1,2);
    nthLevel(a,1,3);
    cout<<endl;
 
// lvels nikal lo and 1 se jitne bhi number of level hai one se leke waha tk lopp chalalenge and hrr loop ye function chala lo                                   
}