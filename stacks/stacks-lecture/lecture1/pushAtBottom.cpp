// "char" linked list is alos possible
// stacks is  intitution for different coding like recusrsion
//   
#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>&st){
    stack<int>temp;
     while(st.size()>0){
        temp.push(st.top());
        st.pop();
     } 
     cout<<endl;
     while(temp.size()>0){ //delete the stack
        cout<<temp.top()<<" "; 
        st.push(temp.top());
        temp.pop();
     }
     cout<<endl;
}
void pushAtBottom(stack<int>&st, int val){
        stack<int>temp;
        while(st.size()>0){
            temp.push(st.top());
            st.pop();
        }
        st.push(val);
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }

}


int main(){
    stack<int>st;
    st.push(10); //10
    st.push(20); //10 20
    st.push(30); //10 20 30 
    st.push(40);// 10 20 30 40
    st.push(10); // 10 20 30 40 10 
    st.push(20); //10 20 30 40 10 20 
    st.push(30);//10 20 30 40 10 20 30     
    print(st);
    cout<<endl;
    pushAtBottom(st,-10);
    print(st);
    pushAtBottomRev(st,-20);
    print(st);
}