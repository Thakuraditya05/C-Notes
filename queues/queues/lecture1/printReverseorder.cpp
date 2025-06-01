// required a stack or array or vectors 
// but not possible with  another queue   

#include<iostream>
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
void reverse(queue<int>&q){
    stack<int>st;
    // empty the queue into stacks
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    // now emppty the staks in queue 
    while(st.size()>0){
        int x=st.top();
        q.push(x);
        st.pop();
        
    }
}



int main(){
    queue<int>q;
    q.push(100); //100
    q.push(200); // 200 100
    q.push(300); // 300 200 100 
    q.push(140); // 140 300 200 100 
    q.push(500); // 500 140 300 200 100 
    q.push(160);// 160 500 140 300 200 100 
    display(q);
    reverse(q);
    display(q);


}