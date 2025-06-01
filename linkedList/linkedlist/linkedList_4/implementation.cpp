#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;
    Node* prev; //extra for DLL
    Node(int val){
        this->next=NULL;
        this->prev=NULL;
        this->val=val;
    }

};

class DLL{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
         head=tail=NULL;
         size=0;
    }
    void insertAtTail(int val){ //o(1);
        Node* temp= new Node(val);// temp ek variable address strooage ke liye 
        if(size==0) head=tail=temp;
        if(size>0){
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;

    }
    void insertAtHead(int val){ //o(1);
        Node* temp= new Node(val);// temp ek variable address strooage ke liye 
        if(size==0)head=tail=temp;
        if(size>0){
            temp->next=head;
            head->prev=temp;
            head=temp;
            }
        size++;

    }
    void insertAtIdx(int idx, int val){ //o(n)
        if(idx<0||idx>size) cout<<"invalid index";
        else if(idx==0)  insertAtHead(val); //
        else if(idx==size)insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp; ///
            t->next->prev=t;//
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
            if(idx<size/2){
                Node* temp=head;
                for(int i=1;i<=idx;i++){
                    temp=temp->next;
                }
                return temp->val;
            }else{
                Node* temp=tail;
                for(int i=1;i<size-idx;i++){
                    temp=temp->prev;
                }
                return temp->val;
            }
        }
}
    void deleteAtHead(){
          if(size==0){
            cout<<"invalid! alredy empty"<<endl;
            return;
          }
        //   else if(size==1){
        //     head=tail=NULL;
        //     size--;
        //   }
            head=head->next;
            if(head)head->prev=NULL;
            if(head==NULL)tail=NULL;
            size--;
    }
    void deleteAtTail(){
            if(size==0)cout<<"invalid! alredy empty"<<endl;
            else if(size==1){
                deleteAtHead();
                return;
            }
           
            Node* temp = tail->prev;
            temp->next=NULL;
            tail=temp;
            size--;
            
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
            temp->next=temp->next->next; //temp ka next change kr duya bhai maine 
            temp->next->prev=temp; 
            size--;
            }
    }
};
 
int main(){
    // DLL list=new DDL(); //ye pointer type banane ke liye krte ha bhai 
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail( 50);
    list.insertAtTail( 40);
    list.insertAtTail( 30);
    list.insertAtIdx(3,1000);
    list.display();
    list.deleteAtTail();
    list.display();
    list.insertAtTail( 60);
    list.deleteAtIdx(3);
    list.display();
    cout<<list.getAtIdx(1)<<endl;
    cout<<list.getAtIdx(3)<<endl;

}