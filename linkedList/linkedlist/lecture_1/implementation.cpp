// to implement 
// linkedList LL;
// ll.add(60);
// ll.addAtHead(90);
// ll.deleteAt(2);
// ll.insertAt(3,80);


// for  case1:Size>0;
// ll.insertAtEnd(40);
// Node* temp =new Node(40);
// tail->next=temp;
// tail=temp;
// size++;

// for case 2 Size=0;
// // ll.insertAtEnd(10);
// Node* temp =new Node (10);
// head=tail=temp;
// Size++


// insert at begging 
// for  case1:Size>0;
// ll.insertAtBiggning(40);
// Node* temp =new Node(40);
// temp->next=head;
// head=temp;
// size++;

// for case 2 Size=0;
// // ll.insertAtBiggning(10);
// Node* temp =new Node (10);
// head=tail=temp;
// Size++
// ll.insertAtead;
// Node*temp

// // isertAt(int idx,int val){
//     if(idx==0)ll.iserAtHEaad;
//     if(idx==Size)ll.insertAtTail;
//     if(idx<0 || Idx>size)invalid;
//     else{
//      traverse(t) temp to idx-1
        // t->next->temp->next:
        // temp->next=t;        
// }
// // }


// getElementmethod()
//     if(idx==0)return head->val;
//     if(idx==Size)return htail->val;
//     if(idx<0 || Idx>size)invalid;
//     else{
//      traverse(t) temp to idx-1
        // return temp->next        
// }
// // }

// deleteATHead()
//     if(size==0)return listis empty already ;
//     if(idx<0 || Idx>size)invalid;
//     if(size==1) head =tail=NULL and size--
//     if(Size>=1) head=head->next size --
        
// // }


// LinkedList is zero(0) indexing 
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
            for(int i=1;i<=idx;i++){
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
            for(int i=0;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
            }
    }
};
  
int main(){
    // int arr[]=new int[];//dynamicAllocation of aarya 
    LinkedList ll ; //= new LinkedList()
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(60);
    ll.insertAtTail(40);
    ll.insertAtTail(70);
    ll.insertAtTail(80);
    ll.insertAtTail(90);
    ll.display();
    cout<<ll.size<<endl; //ll.size()--->wrong kyoki wo data member hai na ki data function
    ll.insertAtHead(100);
    ll.insertAtHead(100);
    ll.insertAtHead(100);
    ll.display();
    ll.insertAtIdx(4,80);
    ll.display();
    cout<<ll.getAtIdx(2);
    ll.deleteAtIdx(6); //
    cout<<endl;
    ll.display();




}