#include<iostream>
#include<vector>

using namespace std;
class MyCircularQueue {
public:
    int f;
    int b;
    int s;
    int c;
    vector<int>arr;

    MyCircularQueue(int k) { // initialising size of array 
        f=0;
        b=0;
        s=0;
        c=k;
        vector<int>v(k);
        arr=v;
    }
    
    bool enQueue(int value) { //push front
        if(s==c)return false;
        arr[b]=value;
        b++;
        if(b==c)b=0;//imp
        s++;
        return true;
    }
    
    bool deQueue() { //popfront
        if(s==0)return false;
        f++;
        if(f==c)f=0;//imp
        s--;
        return true;
    }
    
    int Front() { // top front
        if(s==0)return -1;
        return arr[f];
    }
    
    int Rear() { //back
         if(s==0)return -1;
         if(b==0) return arr[c-1]; //
         return arr[b-1];
    }
    
    bool isEmpty() {  // emty 
        if(s==0)return true;
        else return false;
    }
    
    bool isFull() {  //s==k
        if(s==c)return true;
        else return false;
    }
};











