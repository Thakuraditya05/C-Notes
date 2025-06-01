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

void reverseK(int k, queue<int>&q){
    stack<int>st;
    int n=q.size();
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
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
    q.push(7);
    q.push(9);
    q.push(10);
    display(q);
    int k=5;
    reverseK(k,q);
    display(q);
}