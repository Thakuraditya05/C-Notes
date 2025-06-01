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

//   1st things for the rotation of array ---->uska pura logic scocho bs 
// use threee pointer head and tail and temp 
// base case soch lena 
// temp ko traverse karao and jaise hi temp->next == null tail =temp and same time pe length bhi calculate krdo 
// ab start me head hai and last me temp hai duBara loop laga ke  temp ko placed karo length - k-1 pr 
// fir tail->next=head, and head->next =temp->next bswe our ans  
// 
//    
        

// m-2 
// diffrence wala method important hai 
//  



}