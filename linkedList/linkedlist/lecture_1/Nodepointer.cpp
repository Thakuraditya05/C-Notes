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

void display(Node* head){
    Node* temp=head;
    // displayig the linked list by using extra node 
    while(temp!=NULL){ //NULL---> is address hota hai 
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
  Node* a=new Node(10);//a is address storing valribale not value storing variable 
  Node* b=new Node(20);//b is address storing valribale not value storing variable 
  Node* c=new Node(30);//c is address storing valribale not value storing variable 
  Node* d=new Node(40);//d is address storing valribale not value storing variable 

  a->next=b ; // a ek adress string variable hai to usme b ko stoarge de do 
  b->next=c; //b e
  c->next=d;
    cout<<a->next->next->val<<endl;



    // Node* temp=a;
    // // displayig the linked list by using extra node 
    // while(temp!=NULL){ //NULL---> is address hota hai 
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }
    display(a); //a is address hai bhai


}