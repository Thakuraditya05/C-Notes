#include<iostream>
using namespace std;
class Node{ //user defined data type
public: 
    int val;
    Node* next;
    Node(int val ){
        this->val=val;
        this->next=NULL; 
    }

};
class LinkedList{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
         head=tail=NULL;
         size=0;
    }
    void insertAtTail(int val){ //o(1);
        Node* temp= new Node(val);// temp ek variable address strooage ke liye 
        if(size==0){
            head=temp;
            tail=temp;
        }
        if(size>0){
            tail->next=temp;
            tail=temp;
        }
        size++;

    }
    void insertAtHead(int val){ //o(1);
        Node* temp= new Node(val);// temp ek variable address strooage ke liye 
        if(size==0){
            head=temp;
            tail=temp;
        }
        if(size>0){
            temp->next=head;
            head=temp;
            }
        size++;

    }
    void insertAtIdx(int idx, int val){ //o(n)
        if(idx<0||idx>size) cout<<"invalid index";
        else if(idx==0)  insertAtHead(val);
        else if(idx==size)insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<size;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
            }
        }
    void display(){//Node* head
        Node* temp=head;
        // displayig the linked list by using extra node 
        while(temp!=NULL){ //NULL---> is address hota hai 
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    } 
    int getAtIdx(int idx){ //o(n)
        if(idx<0||idx>size) cout<<"invalid index";
        else if(idx==0)  return head->val;
        else if(idx==size)return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
             return temp->val;
            }
        }
    void deleteAtHead(){
          if(size==0){
            cout<<"invalid! alredy empty"<<endl;
            return;
          }
          else if(size==1){
            head=tail=NULL;
            size--;
          }
          else if(size>1){
            head=head->next;
            size--;
          }
    }
    void deleteAtTail(){
          if(size==0)cout<<"invalid! alredy empty"<<endl;
          else if(size==1){
            head=tail=NULL;
            size--;
          }
          else{
            Node* temp = head;
            while(temp->next!=tail){ //NULL---> is address hota hai 
                temp=temp->next;
            }
              temp->next=NULL;
              tail=temp;
              size--;
            }
    }
    void deleteAtIdx(int idx){
        if(idx<0||idx>size) {
            cout<<"invalid index";
            return;
        }
        else if(size==0){
            cout<<"list is alredy empty";
            return;
        }
        else if(idx==0) return  deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
            }
    }
};
  
int main(){
//m-2 recursive  way 
//m-1 iterative way simple hai ye tarika but 

//m-1 iterative way 
// travel krte jaao and reverse krte jaao 
// vaue swap ho rahi hai 
// o(n2)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
// ListNode* getNodeAt(ListNode* head, int idx){
//     ListNode* temp=head;
//     // 1 2 3 4 5
//     for(int i=1;i<=idx;i++){
//         temp=temp->next;
//     }
//     return temp;
// }
//     ListNode* reverseList(ListNode* head) {
//         int n=0;
//         ListNode* temp= head;
//         while(temp){
//             cout<<temp->val;
//             temp=temp->next;
//             n++;
//         }
//         int i=0;
//         int j=n-1;
//         while(i<j){
//             ListNode* left=getNodeAt(head,i);
//             ListNode* right=getNodeAt(head,j);
//             int t=left->val;
//             left->val=right->val;
//             right->val=t;
//             i++;
//             j--;
//         }
//         return head;
//     }
// };

// this is to baad;
// iterartve wave

// proper node cahnge ho rahe hai pahli baat 
// make current, next, prev node 
// next pointer preserve karega next sawpping elment 
// cuurnt= head =current ;
// next=curr->next; //
// curr->next=prev //;
// prev=curr; //
// curr=next; //
// while(curr) 
// return prev
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *prev=NULL, *curr=head, *Next=head;
//         while(curr){
//             Next=curr->nex;
//             currnt
//         }
//         return head;
//     }
// };

// M3 //tc=o(n), sc=o(n)
// recursiv method by recursion  (bs do Node ke liye socho bs )
// bs recusion ko chalana hai bs
// bs do Node kke liye socho 
// reverse(head->next);
// head->next->next=head;
// head->next=NULL;
// // ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL)return head;
//         ListNode* newHead=reverseList(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newHead;
//     }




 }