#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        int x=q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reorder(queue<int>&q){
    int n=q.size();
    stack<int>st;
    // pop from queue and push 1st half to stack 
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // now empty the stacks in the que drom back 
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    // pop 2nd half (now the first ) of the q to the st 
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // most mportant inter leave the tops of queue and stacks 
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // reverse the stack using the stack 
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    // now empty the stacks in the que drom back 
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    
}
int main(){
    // m1 queue lo 2 stacks lo or ek ko kahli kr ke dusare me daalo 
    // m2 ek queue lo or ek stack lo and loop laga ke k elemnt hatao and baad me loop laga ke ques me se hi pop kr ke ques  hi daal do 
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}



 




