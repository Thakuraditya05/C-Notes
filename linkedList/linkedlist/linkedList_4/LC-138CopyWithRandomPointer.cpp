// importnat bahut accha question hai ye wala 
// best question of liked list bhai ausam is ausam 
// 
#include<iostream>
#include<vector>
using namespace std;
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
      Node* duplicate=dummy->next;
//   step 2- alternate connection
    Node* a=head;
    Node* b=duplicate;
    dummy=new Node(-1);
    Node* tempD =dummy;
    while(a){
        tempD->next=a;
        a=a->next;
        tempD=tempD->next;
        tempD->next=b;
        b=b->next;
        tempD=tempD->next;
    }
    dummy=dummy->next;
    //    step-3 assign random pointer in dublicate
    Node* t1=dummy;//t1 will traverse in the original list 
    while(t1){
        Node* t2=t1->next;//t2 will traverse in the original
        if(t1->random)t2->random=t1->random->next;
        t1=t1->next->next;
    }
    // step 4 -> removing the connections (separate )
    Node* d1=new Node(100);
    Node* d2=new Node(200);
        t1=d1;
    Node* t2=d2;
    Node* t=dummy;

    while(t){
       t1->next=t;
       t=t->next;
       t1=t1->next;
       t2->next=t;
       t=t->next;
       t2=t2->next;  
    }

    t1->next=NULL;
    t2->next=NULL;
    d1=d1->next;
    d2=d2->next;
     return d2;
    }

};




























    