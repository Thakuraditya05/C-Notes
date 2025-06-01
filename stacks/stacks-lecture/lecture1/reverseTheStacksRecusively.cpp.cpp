 // "char" linked list is alos possible
// stacks is  intitution for different coding like recusrsion
//stack []   

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

// void pushAtBottom(stack<int>&st, int val){
//         stack<int>temp;
//         while(st.size()>0){
//             temp.push(st.top());
//             st.pop();
//         }
//         st.push(val);
//         while(temp.size()>0){
//             st.push(temp.top());
//             temp.pop();
//         }
// }

// void pushAtAnyIndex(stack<int>&st,int idx, int val){
//         stack<int>temp;
//         while(st.size()>idx){
//             temp.push(st.top());
//             st.pop();
//         }
//         st.push(val);
//         while(temp.size()>0){
//             st.push(temp.top());
//             temp.pop();
//         }
// }
// aise hame lagega ki ki issme koi extra space nahi use hui hai but tum galat ho 
//  ek call stack naam ki cheez create hota hai wo call stacks bhi spxce le raha hai stacks ke barabr 
void displayRev(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    cout<<x<<"  ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void display(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    st.pop();
    displayRev(st);
    cout<<x<<"  ";    
    st.push(x);
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
     
    
    display(st);
    cout<<endl;
    displayRev(st);
}