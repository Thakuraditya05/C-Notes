#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#include<algorithm>
#include<queue>
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
Node* construct(int arr[],int n){
        queue<Node*>q;
        Node* root=new Node(arr[0]);
        q.push(root);
        int i=1;
        int j=2;
        while(q.size()>0 && i<n){
            Node* temp=q.front();
            q.pop();
            Node* l;
            Node* r;
            if(arr[i]!=INT_MIN)l=new Node(arr[i]);
            else l=NULL;

            if(j!=n && arr[j]!=INT_MIN)r=new Node(arr[j]);
            else r=NULL;

            temp->left=l;
            temp->right=r;

            if(l!=NULL )q.push(l);
            if(r!=NULL )q.push(r);

            i+=2;
            j+=2;
        }
        return root;
}
int  levels(Node* root){
    if(root==NULL)return 0;
    return 1+ max(levels(root->left),levels(root->right));
}
void nthLevel(Node* root,int curr, int level){  // root left right  1 2 4 8 5  9 10 3 6 11 7 
    if(root==NULL)return; 
    if(curr==level){
        cout<<root->val<<"  ";
        return;
    } 
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
}
void levelOrder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}




// left order traversal lagana hai bs 
// 
// 
void leftboundry(Node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    cout<<root->val<<"  ";
    leftboundry(root->left);
    if(root->left==NULL)leftboundry(root->right);
}



int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    // boundry traversal;
    leftboundry(root);

}