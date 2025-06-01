// array { , , , , , ,  ,....n} and idx=-1;
// st.push--->{70, , , , , , } and idx++;
// st.pop()---->idx--;
// st.top()-->return arr[idx];
// st.size()--->return (idx+1);
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Stack{ //user defined data structure
public:
    vector<int>v; //noverflow conditions 
    
    Stack(){
         
    }
    void push(int val){
// vector full nahi hota hai kabhi bhii uska size badhta jata hai 
        v.push_back(val);
    }
    // st.pop
    void pop(){
        if(v.size()==0) {
                cout<<"vector  is empty nothing to pop "<<" ";
                return;
        }
       v.pop_back();
    }
    // st.pop
    int top(){
        if(v.size()==0) {
                cout<<"vector  is empty nothing to top  "<<" ";
                return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
 

int main(){
    Stack st;
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
    st.push(1000);//10 20 30 40 10 20 30 1000
    cout<<st.top()<<endl;//
    cout<<st.size()<<endl;
}