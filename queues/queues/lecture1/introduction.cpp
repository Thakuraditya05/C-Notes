// FIFO stand in queue 
// push and pop from opisite side 
// front  _______________________________ rear
//  PUSH/POP                              POP/PUSH
// front  _______________________________ rear 
// push pop front size back empty ---->tc=o(1)
// empty ---> it return true if size()==0 and false when size!=zero
#include<iostream>
#include<queue>
#include<iostream>
using namespace std;

void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<endl;
        int x=q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

int main(){
    queue<int>q;
    q.push(100); //100
    q.push(200); // 200 100
    q.push(300); // 300 200 100 
    q.push(140); // 140 300 200 100 
    q.push(500); // 500 140 300 200 100 
    q.push(160);// 160 500 140 300 200 100 
    // cout<<q.front()<<endl; // 100
    // q.pop() ;
    // cout<<q.front()<<endl;
    // display of stack takes tc o(n) and sc o(n);
    // display of queue takes tc(n) and sc o(1);
display(q);


}