// doubly ended queue
// push and pop dono front se ho skte hai and back se bhi ho skte hai an tc=o(1)
//  doubly linked list and array impelemntation and arrays dono se implement kkr sket hai
// addFront() getfront() deleteFront() deleteRear() size()
// addrear() getRear() deleteRear() 
//  use doubly sided linked list 
// singly lunked list se::pushfront(1) pushback(1)popfront(1)popback(n)--->probleum yehi hai apni 
// singly lunked list se::pushfront(1) pushback(1)popfront(1)popback(1)

#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev; // extra for DLL
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;// extra for DLL
    }

};
class Deque{
public: 
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head=tail=NULL;
        size=0;
    }
    // push back
    void pushBack(int val){
        Node* temp=new Node(val);
        if(size==0)head = tail =temp;
        else{
            tail->next=temp;
            temp->prev=tail;//extra 
            tail=temp;
        }
        size++;
    }
    // push front
    void pushFront(int val){
        Node* temp=new Node(val);
        if(size==0)head = tail =temp;
        else{
            temp->next=head;
            head->prev=temp;//extra 
            head=temp;
        }
        size++;
    }
    // delete front
    void popFront(){
        if(size==0){
            cout<<"deque is empty"<<endl;
            return;
        }
        else{
            head=head->next;
            if(head)head->prev=NULL;
            if(head==NULL)tail=NULL; // extra
            size--;
        }
    }
    // delete-back()
    void popBack(){
        if(size==0){
            cout<<"deque is empty"<<endl;
            return;
        }
        else if(size==1){ //extra
            popFront();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
    }
    // 
    int front(){
        if(size==0){
            cout<<"Queue is empty"<<"  ";
            return -1;
        }
        return  head->val;
    }
    
    int back(){
        if(size==0){
            cout<<"Queue is empty"<<"  ";
            return -1;
        }
        return tail->val;
    }
    int length(){
        return size;
    }
    bool empty(){
        if(size==0) return false;
        else return true;
    }
    
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){

    Deque dq;
    dq.pushBack(10);
    dq.pushBack(30);
    dq.pushBack(20);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.popFront();
    dq.display();
    dq.pushFront(100);
    dq.display();
     cout<<dq.front()<<endl;
     cout<<dq.back()<<endl;

}

