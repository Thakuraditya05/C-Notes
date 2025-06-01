#include<iostream>
using namespace std;

//spwcial data type jiske data  member me se ek int type ka hai orr ek address storing type ka  
class Node{
public: 
    int val;
    Node* next;
// constructor me ek do teen kitne bhi data member ko define kr skte hai baki bacche hue 
    // Node(int val){
    //     this->val=val;
    // }

      Node(int val ){
        this->val=val;
        this->next=NULL; /// taki garbesge value sbme na aaye null ek deafult value bn jaye sbke liye 
        // now this is prper linked list node
    }

};
int main(){
    Node a(10);
    Node b(30);
    Node c(40);
    Node d(20);
    cout<<a.next<<endl; // garbesge value de deta hai isse bachne ke liye hm log banate hai node pointer ki valiue one 
    cout<<a.val<<endl;
// forming linked list 
    a.next=&b;
    b.next=&c;
    c.next=&d; 
    d.next=NULL;


}