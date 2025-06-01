// ancesters -->sortest distance b/w root and that perticular node 
// level->generation
// in every segment we have some left children and some right clidren and  ((left children->val )<(right clidren->val))
#include<iostream>
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
void displaytree(Node* root){
    if(root==NULL)return;
    cout<<root->val<<"  ";
    displaytree(root->left);
    displaytree(root->right);
}

int main(){
    Node* a= new Node(1);
    Node* b= new Node(2);
    Node* c= new Node(3);
    Node* d= new Node(4);
    Node* e= new Node(5);
    Node* f= new Node(6);
    
    Node* g= new Node(7); 
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=g;
    c->left=f;
    displaytree(a);
    cout<<endl;

}


