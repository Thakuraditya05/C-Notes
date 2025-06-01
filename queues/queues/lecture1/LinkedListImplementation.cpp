 
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->next=NULL;
        this->val=val;
    }

};
class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL; // initailly dono cheeze null pe honge 
        size=0;  // size ki value zero zero pe hogi 
    }
    
    void push(int val){
         Node* temp =new Node(val);
         if(size==0)head=tail=temp;
         else{
            tail->next=temp;
            tail=temp;
         }
         size++;
    }
   
     void pop(){
        if(size==0){
            cout<<"Queue is empty"<<" ";
            return;
        }
        Node* temp =head;
        head=head->next;
        size--;
        delete(temp); //// wasteage nahi ho rahi hai yaad rakhna iss cheez ko 
         
     }
    

    int front(){
        if(head==NULL){
            cout<<"Queue is empty"<<"  ";
            return -1;
        }
        return  head->val;
    }
    
    int back(){
        if(tail==NULL){
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
    Queue q; // infinity
    q.push(100); //100
    q.push(200); // 200 100
    q.push(300); // 300 200 100 
    cout<<q.length()<<endl; //
    q.push(140); // 140 300 200 100 
    q.push(500); // 500 140 300 200 100 
    q.push(160);// 160 500 140 300 200 100 
    q.display();
    q.length();

}