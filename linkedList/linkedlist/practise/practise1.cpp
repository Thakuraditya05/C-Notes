#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
    
    
};
class ListNode{ //data structure 
public: 
    Node* head;
    Node* tail;
    int size=0;
    ListNode(){
        head=tail=NULL;
        size=0;
    }
    // insert at end
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp=tail;
        }
        size++;
    }
    // insert at head 
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    // insert at idx
    void insertAtIdx(int val, int idx){
        if(idx<0 || idx>size){
            cout<<"invalid";
            return;
        }
        if(idx==0)insertAtHead(val);
        else if(idx==size)insertAtEnd(val);
        else{
            Node* dummy =head;
            Node* temp=new Node(val);
            while(idx--){
                dummy=dummy->next;
            }
            temp->next=dummy->next;
            dummy->next=temp;
            size++;
        }
    }
    // getElement 
    int getElementAtIdx(int idx){
        if(idx<0 || idx>size){
            cout<<"invalid";
            return;
        }
        if(idx==0)return head->val;
        else if(idx==size-1)return tail->val;
        else{
            Node* dummy =head;
            while(idx--){
                dummy=dummy->next;
            }
            return dummy->val;
        }
    }
    // 
    // delete at end
    void deleteAtEnd(){
        if(size==0){
            cout<<"invalid index";
            return;
        }
        else{
            Node* dummy =head;
            while(dummy->next->next){
                dummy=dummy->next;
            }
            dummy->next=NULL;
        }
        size--;
    }
    // delete at head 
    void deleteAtHead(){
        if(size==0){
            cout<<"invalid index";
            return;
        }
        else{
           head=head->next;
        }
        size--;
    }
    // delete at idx
    void deleteAtIdx(int idx){
        if(idx<0 || idx>size){
            cout<<"invalid";
            return;
        }
        if(idx==0)deleteAtHead();
        else if(idx==size-1)deleteAtEnd();
        else{
            Node* dummy =head;
            while(idx--){
                dummy=dummy->next;
            }

            dummy->next=dummy->next->next;
            size--;
        }
    }
};

int display(Node* head){

}



int main(){


// * ===>temp ke under address \addindex
//   


}