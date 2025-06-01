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
int main(){
    Node a(10);
    Node b(30);
    Node c(40);
    Node d(20);
    // forming linked list 
    // ye teen line linkage ke liye kaam krti hai na ki linked list node ko 
    a.next=&b;
    b.next=&c;
    c.next=&d;  
    cout<<b.val<<endl;
    // Node* ptr =&b; how to print value of any element with  pointer 
    // ptr->val=60;
    // cout<<ptr->val<<endl;
    cout<<(*(a.next)).val<<endl; // eye ke pass b ka access hai 
    cout<<a.next->val<<endl; // b ke pass c ka address shai 
    cout<<a.next->next->next->val<<endl;
    //a.next->
    cout<<a.next->next->next->val<<endl;
    
    Node temp=a;
    // while(temp.next !=NULL){
    //         cout<<temp.val<<"  ";
    //         temp=*(temp.next); ///*-->dereferance ooperature //just adress of b and *(&b) 
    //         // remp ka address nahi change hoga yaad rakhna plz
    // }
            // too much important 
            while(true){
                    cout<<temp.val<<"  ";
                    if(temp.next==NULL) break;
                    temp=*(temp.next); ///*-->dereferance ooperature //just adress of b and *(&b) 
                    // remp ka address nahi change hoga yaad rakhna plz
            }

}