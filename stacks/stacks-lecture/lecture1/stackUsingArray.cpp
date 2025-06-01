// array { , , , , , ,  ,....n} and idx=-1;
// st.push--->{70, , , , , , } and idx++;
// st.pop()---->idx--;
// st.top()-->return arr[idx];
// st.size()--->return (idx+1);
#include<iostream>
#include<stack>
using namespace std;

class Stack{ //user defined data structure
public:
    int arr[5];
    int idx;
    Stack(){
        this->idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])-1) {
                cout<<"stack is full"<<" ";
                return;
        }
        idx++;
        arr[idx]=val;
    }
    // st.pop
    void pop(){
        if(idx==-1) {
                cout<<"stack is empty"<<" ";
                return;
        }
        idx--;
    }
    // st.pop
    int top(){
        if(idx==-1){
            cout<<"stack is empty"<<" ";
            return -1;
        }
        return arr[idx];
    }
    // to display
    void display(){
        
    }
    int size(){
        return (idx+1);
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
    st.push(1000);//10 20 30 40 10 20 30 40
    cout<<st.top()<<endl;//
    cout<<st.size()<<endl;
}