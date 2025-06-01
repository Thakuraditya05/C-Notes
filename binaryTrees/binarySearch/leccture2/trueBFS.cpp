// 40min se krna fir se 
#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
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
// 
// actual bfs is this 
void levelOrederQueue(Node* root){
        queue<Node*>q;
        q.push(root);
        while(q.size()>0){
            Node* temp=q.front();
            q.pop();
            cout<<temp->val<<" ";
            if((temp->left))q.push(temp->left);
            if((temp->right))q.push(temp->right);
        }
        cout<<endl;
}
int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    Node* f= new Node(60);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;

    levelOrederQueue(a);
}