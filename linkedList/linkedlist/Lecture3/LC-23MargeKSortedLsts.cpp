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

//m1 ki ek function bana lete hai jiske under 2 list merge krne ki power ho and uske baad wu return bhi kare MERGED SHORTED NODE 
//and usske baad wo function call krta jaunga hrr PRimery index kr liyr ( 👍🎉 soch liya )

// if(arr.size()==0) return NULL;
// while(arr.size()>1){
//     ListNode* a=arr[arr.size()-1];
//     arr.pop_back();
//     ListNode* b=arr[arr.size()-1];
//     arr.pop_back(b);
//     ListNode* c=merge(a,b); // merge function two function (leetcode-21.)
//     arr.push_back(c);
// }
// return arr[0];
// time complexity 
// n element in each array 
// k elemnt in i array 

// m2 is best mai abhi iss state pe nahi soch paya 😥
// base case binary search jai socho 
// for(i=0;i<size;i++){
//     merge(arr[i],arr[i+1]) do adjuscent ko merge kr rahe hai 
// }
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15..........32
// 32n 32n 32n 32n 32n = 160n
// array se  se do consicutive node  bahar nikalo and usko merge kr do ad last mme push kr do 
// if(arr.size()==0) return NULL;
// while(arr.size()>1){
//     ListNode* a=arr[0]; // 1st node ko bahar nikala 
//     arr.erase(arr.begin());// node index point se 
//     ListNode* b=arr[0]; //jo ab index one pe aagayi hai uskko nikalo bahar 
//     arr.erase(arr.begin()); //ab uss index ko bhi hata do 
//     ListNode* c=merge(a,b); // merge function two function (leetcode-21.) // un  dono ko merge kiya 
//     arr.push_back(c); //
// } //sc=o(k)
// return arr[0]
}