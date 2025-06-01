// homework 1 print the stack in normal order and in rverse order
// bura hai but desciplen provide ho raha hai stacks me 
// homework 2 reverse the stacks (by simply using 3 stacks at a time )
// reverse the stacks by using arrays/vectors



//st[10 20 30 40 50 ]--->vector<int>v(st.size(),0)={50 40 30 20 10 }
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
     while(st.size()>0){
        int x=st.top();
        cout<<x<<" ";
        temp.push(x);
        st.pop();
     } 
     cout<<endl;
     while(temp.size()>0){ //delete the stack 
        st.push(temp.top());
        temp.pop();
     }
}
int main(){
    stack<int>st;
    for(int i=10;i<=100;i+=10){
        st.push(i);
    }
    print(st);
    stack<int>gt ;
    stack<int>rt ;
    // emppty te st into gt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    // emppty gt st into rt;
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    // emppty rt  into st;
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    print(st);

}
