#include<iostream>
using namespace std;

//spwcial data type jiske data  member me se ek int type ka hai orr ek address storing type ka  
class Node{
public: 
    int val;
    Node* next;

};
int main(){
    Node a;
    a.val=10;

    Node b;
    b.val=20;

    Node c;
    c.val=30;

    Node d;
    d.val=40;
// forming linked list 
 a.next=&b;
 b.next=&c;
 c.next=&d;
 d.next=NULL;


}