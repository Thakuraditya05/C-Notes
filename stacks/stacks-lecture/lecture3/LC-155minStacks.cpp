// bahut accha question hai bhai ye bahuyt hi jada 
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<stack>
using namespace std;


// m-1
// brute force 
// ek staks le lenge and usme empty karenge original stack and empty krte samay minimum maintain kr lenge 
// and debara orginal stack me khali kr denge and 
// tc=o(n) sc=(n)

// stack<int>st; //  issme inbuikt hote hai push pop and top
//     // MinStack() { //constructor
        
    // }
    
    // void push(int val) {
    //     st.push(val);
    // }
    
    // void pop() {
    //     st.pop();
    // }
    
    // int top() {
    //     return st.top();
    // }
    
    // int getMin() {
    //     stack<int>helper;
    //     int mn=INT_MAX;
    //     while(st.size()>0){
    //         mn=min(mn,st.top());
    //         helper.push(st.top());
    //         st.pop();
    //     }
    //     while(helper.size()>0){
    //         st.push(helper.top());
    //         helper.pop();
    //     }
    //     return mn;
    // }

// m-2
//ek aur stack banaunga aur push krte samay chech karungfa ki jo dusara wala helper stack hai uska top is less than oringinal pushing ellemnt is yes then push and and to leave as it  
     stack<int>st; //  issme inbuikt hote hai push pop and top  tc(1)
    stack<int>helper;
    MinStack() { //constructor
        
    }
    
    void push(int val) {
        st.push(val);
        if(helper.size()==0||val<helper.top())helper.push(val);
        else helper.push(helper.top());
    }
    
    void pop() { //o(1)
        st.pop();
        helper.pop();
    }
    
    int top() { //o(1)
        return st.top();
    }
    
    int getMin() {
        return helper.top();
    }

// sc=o(1) tc(n); /// implement linked list or vector implementation
    // vector<int>v;
    // MinStack() { //constructor    
    // } 
    // void push(int val) {
    //     v.push_back(val);
    // }
    // void pop() { //o(1)
    //     v.pop_back();
    // }
    // int top() { //o(1)
    //     return v[v.size()-1];
    // }
    // int getMin() {
    //     int mn=v[0];
    //     for(int i=1;i<v.size();i++){
    //         mn=min(mn,v[i]);
    //     }
    //     return mn;
    // }

// m-4  
// falsy value concept 
    // long long min;
    // stack<long long>st;
    // MinStack() { //constructor
    //     min=LLONG_MAX;
    // }
    // void push(int val) {
    //     long long x=(long long)val;
    //     if(st.size()==0){
    //         st.push(x);
    //         min=x;
    //     }
    //     else if(x>=min) st.push(x);
    //     else { //val<min
    //         st.push(2*x-min);
    //         min=x;
    //     }
    // }
    // void pop() { //o(1)
    //     if(st.top()<min){// a fake value is present 
    //         long long oldMin=2*min-st.top();
    //         min=oldMin;            
    //     }
    //     st.pop();
    // }
    // int top() { //o(1)
    //     if(st.top()<min)return (int)min;
    //     else return (int)st.top();
    // }
    // int getMin() {
    //     return (int)min;
    // }

int main(){

}
