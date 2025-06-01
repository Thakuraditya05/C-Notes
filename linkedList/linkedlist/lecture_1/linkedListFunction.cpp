#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;
    Node(int val ){
        this->val=val;
        this->next=NULL; 
    }

};
void displayRecurrsiv(Node* head){
     if(head==NULL) return;
     cout<<head->val<<" ";
     displayRecurrsiv(head->next);
}
void display(Node* head){
    Node* temp=head;
    // displayig the linked list by using extra node 
    while(temp!=NULL){ //NULL---> is address hota hai 
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void displayRecurrsiv2(Node* head){
    if(head==NULL)return;
    displayRecurrsiv2(head->next);
    cout<<head->val<<" ";
}

void insertAtEnd(Node* head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL)head=head->next;
    head->next=t;
}

int size(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

int main(){
  Node* a=new Node(10);//a is address storing valribale not value storing variable 
  Node* b=new Node(20);//b is address storing valribale not value storing variable 
  Node* c=new Node(30);//c is address storing valribale not value storing variable 
  Node* d=new Node(40);//d is address storing valribale not value storing variable 

  a->next=b ; // a ek adress string variable hai to usme b ko stoarge de do 
  b->next=c; //b e
  c->next=d;

  display(a); //a is address hai bhai
  cout<<size(a)<<endl;
  displayRecurrsiv(a);
  insertAtEnd(a,50);
  insertAtEnd(a,50);
  insertAtEnd(a,50);
    displayRecurrsiv(a);


}





// Great question! Let's break it down:

// Function:
// cpp
// Copy
// Edit
// void displayRecurrsiv(Node* head) {
//     if (head == NULL) return;
//     cout << head->val << " ";
//     displayRecurrsiv(head->next);
// }
// Question:
// "Will I lose my head pointer?"

// ✅ Answer:
// No, you will not lose your head pointer.

// Why?
// In C++, function arguments are passed by value by default — even when you pass a pointer. That means:

// Inside displayRecurrsiv, head is a copy of the original pointer you passed.

// Any changes to head inside the function do not affect the original head outside the function.

// So when you do:

// cpp
// Copy
// Edit
// displayRecurrsiv(head);
// It goes into recursion and head keeps changing in each call — but only the copies change.

// Once recursion finishes, your original head is completely safe and unchanged.

// 💡 If You Want to Actually Modify the Head:
// Then you'd pass a reference to the pointer like this:

// cpp
// Copy
// Edit
// void modify(Node*& head) {
//     head = head->next;
// }
// But in your function, you're just reading, so no worries about losing the head pointer.

// Let me know if you want to test it or dry-run it with a diagram!