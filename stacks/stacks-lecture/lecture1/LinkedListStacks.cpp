// zabardast hoti hai 
// Node application 
// delete krna elemnt ko difficult hai 
// tc-->o(1)--->push, pop, top;
// node banao temp  
// temp=new node
// temp->next=head
// team=head;


 
#include<iostream>
#include<stack>
#include<vector>
using namespace std;


class Node{  // user defined data type 
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};


class Stack{ //user defined data structure
public:
     Node* head;
     int size;
     Stack(){
        size=0;
        this->head=NULL;
     }
    // to push 
    void push(int val){
        Node* temp=new Node(val); // nayi node bana di 
        temp->next=head;
        head=temp;
        size++;
    }
    // pop
    void pop(){
        if(head==NULL){
            cout<<"empty null"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    // top
    int top(){
        if(head==NULL){
        cout<<"stack is empty "<<endl;
        return -1;
        }
        return head->val;
    }

    // to display  

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void print(Node* temp){
        if(temp==NULL)return;
        print(temp->next);
        cout<<temp->val<<"  ";
    }

};
 
// unlimited nature 
// array display-->o(1)
// ll in doublle size leta hai 

int main(){
    Stack st;
    cout<<st.size<<endl;
    st.push(10); //10
    st.push(20); //10 20
    st.push(30); //10 20 30 
    st.push(40);// 10 20 30 40 
    cout<<st.size<<endl; // 4
    cout<<st.top()<<endl; //40
    st.display();
    st.push(10); // 10 20 30 40 10 
    st.push(20); //10 20 30 40 10 20 
    st.push(30);//10 20 30 40 10 20 30 
    st.push(1000);//10 20 30 40 10 20 30 1000
    cout<<st.top()<<endl;//
    cout<<st.size<<endl;
}