#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

// built in stacks use krke issko print krwani hai do stacks ka use lagega kyo ki ek stacks apne aap ko print bhi nahi krwa skta  
// pop (1)push(n)   ,,,, push(1)pop(n)
// M1 push efficient 

class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    MyQueue() {
        
    }
    void push(int x) {
        st.push(x);
    }
    int pop() { // O(n)
        // removes at bottom
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x=helper.top();
        helper.pop();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return x;

    }
    int peek() {
        // retrives at bottom
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x=helper.top();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};
// built in stacks use krke issko print krwani hai do stacks ka use lagega kyo ki ek stacks apne aap ko print bhi nahi krwa skta  
// pop (1)push(n)   ,,,, push(1)pop(n)
// M2 pop efficient 

class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    MyQueue() {
        
    }
    void push(int x) {
        if(st.size()==0)st.push(x);
        else{
            while(st.size()>0){
            helper.push(st.top());
            st.pop();
            }
            st.push(x);
            while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
            }
        }
    }
    int pop() {
        int x=st.top();
        st.pop();
        return x;
    }
    int peek() {
        int x=st.top();
        return x;
    }
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};

// importabnt

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(9);

}