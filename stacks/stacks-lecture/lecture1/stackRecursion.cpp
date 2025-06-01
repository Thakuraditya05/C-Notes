// "char" linked list is alos possible
// stacks is  intitution for different coding like recusrsion
//   
#include<iostream>
#include<stack>
using namespace std;

void displayRev(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    cout<<x<<"  ";
    st.pop();
    displayRev(st);
    st.push(x);
}

void pushAtBottomRev(stack<int>&st, int val){ // call stacks to use ho raha hai 
        if(st.size()==0){ 
            st.push(val);
            return;
        }
        int x=st.top();
        st.pop();
        pushAtBottomRev(st,val);
        st.push(x);

}
void reverse(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottomRev(st,x);
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
    displayRev(st);
    cout<<endl;
    pushAtBottomRev(st,-10);
    displayRev(st);
}