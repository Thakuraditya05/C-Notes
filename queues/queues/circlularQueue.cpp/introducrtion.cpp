 
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

class Queue{
public:
    // int n;
    // int arr[n];
    vector<int>arr;
    int f, b;
    int s;
    
    Queue(int val){
        vector<int>v(val);
        arr=v; // vectors me vector ko dal diya 
        this->f=0;
        this->s=0;
        this->b=0;
    }
    
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is fully"<<"  ";
            return ;
        }
        arr[b]=val;
        b++;
        s++;
    }
    
    void pop(){
        if(s==0){
            cout<<"Queue is empty"<<"  ";
            // return;
        }
        f++;
        s--;
    }
    
    int front(){
        if(s==0){
            cout<<"Queue is empty"<<"  ";
            return -1;
        }
        return arr[f];
    }
    
    int back(){
        if(s==0){
            cout<<"Queue is empty"<<"  ";
            return -1;
        }
        return arr[b-1];
    }
    
    int size(){
        return s;
    }
    
    bool empty(){
        if(s==0) return false;
        else return true;
    }
    
    void display(){
    for(int i=f;i<b;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    }
};

int main(){
    Queue q(5); // this is way to give size instatnt 
     q.push(100); //100
    q.push(200); // 200 100
    q.push(300); // 300 200 100 
    q.display(); //
    q.push(140); // 140 300 200 100 
    q.push(500); // 500 140 300 200 100 
    q.push(160);// 160 500 140 300 200 100 
    q.display();

}