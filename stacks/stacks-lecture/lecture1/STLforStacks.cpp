// "char" linked list is alos possible
// stacks is  intitution for different coding like recusrsion
//   
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(10); //10
    st.push(20); //10 20
    st.push(30); //10 20 30 
    st.push(40);// 10 20 30 40 
    cout<<st.size()<<endl; // 4
    cout<<st.top()<<endl; //40
    st.push(10); // 10 20 30 40 10 
    st.push(20); //10 20 30 40 10 20 
    st.push(30);//10 20 30 40 10 20 30 
    st.push(1000);//10 20 30 40 10 20 30 40
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    
    //  while(st.size()>0){
    //     cout<<st.top()<<"  ";
    //     st.pop();
    //  } 
     cout<<endl;
    //  upper wale loop ke karan pura stack khali ho gaya 
    //  to isliye ek stack temp and usme element store karenge 
    // 
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