// insertion, find(searching),
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s; //randome order me storeed hote hai element in set 
    for(int i=0;i<5;i++){
        s.insert(10+i);
    }
    cout<<s.size()<<endl;
    s.insert(12);
    s.insert(13);
     s.insert(17);
    s.insert(20);
    //for each loop ka hi use krna padega priinting ke liye ya while bs 
     for(int ele: s){
        cout<<ele<<"  ";
    }
    cout<<s.size()<<endl;
    s.insert(12);
    s.insert(13);
     s.insert(17);
    s.insert(20);
    s.erase(12);
    cout<<s.size()<<" ";
    // keval unique elemnt ko store krta hai bs 
    cout<<endl;
    // kuch unique baate set ke baar eme 
    // s.find()->it searces in the set ans if 
    // it not found then it return the last elemnt 
    int target=13;
    if(s.find(target)!=s.end()){ //target exists
            cout<<"exsits"<<endl;
    }
    else cout<<"does not exists"<<"  ";

    int tar=70;
    if(s.find(tar)!=s.end()){ //target exists
            cout<<"exsits"<<endl;
    }
    else cout<<"does not exists"<<"  ";
    for(int ele: s){
        cout<<ele<<"  ";
    }

}