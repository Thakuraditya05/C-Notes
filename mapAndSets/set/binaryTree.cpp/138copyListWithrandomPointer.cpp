#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
// class Node{
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//             this->left=NULL;
//             this->val=val;
//             this->right=NULL;
//     }
// };
 
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
 

class Solution {
public:
    Node* copyRandomList(Node* head) {
      // randomDeep copy banao as 1st step  //
      Node* dummy=new Node(0);
      Node* tempC=dummy;
      Node* temp =head;
      while(temp){
        Node* a=new Node(temp->val);
        tempC->next=a;
        tempC=tempC->next;
        temp=temp->next;
      }
      Node* b=dummy->next;
      Node* a=head;
    //   step 2 make a map of <original,duplicate>
        unordered_map<Node*,Node*>m;
        Node* tempa=a;
        Node* tempb=b;
        while(tempa!=NULL){
            m[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;
        }
        for(auto x: m){
            Node* o=x.first;
            Node* d=x.second;
            if(o->random!=NULL){
                // kaam
                Node* Orandom=o->random;
                Node* Drandom=m[o->random];
                d->random=Drandom;
            }
        }
        return b;
    }
};



