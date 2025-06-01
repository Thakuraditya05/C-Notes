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
// m1 get node vala trika o(n2)
// jisme o(n2) me hua th apossible 
// if(left->val!=right->val)return false;
// i++
// 



// m2 reverse kr do pahle list deep copy banane ke baad 
// fir traverse krte jaao and main linked list thi na usse ek ek index match krte jaao 
// orr jaha same index pr valu same na mile waha loop tod do 
//  bool isPalindrome(ListNode* head) {
//         ListNode* c=new ListNode(10);
//         // deep copy 
//         ListNode* temp=head;
//         ListNode* tempC=c;
//         while(temp){ //tc(n) sc(n)
//             ListNode* node=new ListNode(temp->val);
//             tempC->next=node;
//             temp=temp->next;
//             tempC=tempC->next;
//         }
//         c=c->next;
//         c=reverseList(c);tc=0(n)
//         ListNode* a=head;
//         ListNode* b=c;
//         while(a){ tc0(n)
//             if(a->next!=b->val)return false;
//             a=a->next;
//             b=b->next;
//         }
//         return true;
//     }

// soch liya bhia👍👍
// m3 tc(n) sc(1)
// 1st half ad 2nd half is reverse of each other
// soch liya bhai jaan 
// slow and fast as speed pointer ka use kr ke middle of the linked list nikala and then half linked list ko reverse kr diya
// and then jaha slow tha uske just aage 2nd head bn jayega and jo 1st head tha wo waha se and 2nd head ko compare kkaro and traverse karo 
// 1 2 3 3 2 1------>1(head) 2 3(slow) 1(2ndHead) 2 3
// 1  2 3 4 5 ---->1(h)->2->3(s)->1(nh)->2 
//  bool isPalindrome(ListNode* head) {
//         // if the first half and second half are reverse of each 
//         // other then it is palnedrom
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast->next!=NULL&&fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         // slow is at the left mddle(even)/middle(odd)
//         ListNode* newHead=reverseList(slow->next);
//         ListNode* a=head;
//         ListNode* b=newHead;
//         while(a){
//             if(a->val!=b->val)return false;
//             a=a->next;
//             b=b->next;

//         }
//         return true;
//     } 






// another method bro
// ListNode* reverse(ListNode* head) {
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         while (curr != nullptr) {
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* rev = reverse(slow);
//         while (rev != nullptr) {
//             if (head->val != rev->val) {
//                 return false;
//             }
//             head = head->next;
//             rev = rev->next;
//         }
//         return true;  
    
//     }

}