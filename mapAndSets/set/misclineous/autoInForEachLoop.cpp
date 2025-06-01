#include<iostream>
#include<unordered_map>
using namespace std;
// pair class 
int main(){
    unordered_map<string, int>m;
    // hash map me pura ka pura insert hota hai 
    // m.insert("ragahv",76); nahi hhoga thi is not java bro 

    // aise krte hai insert 
    pair<string,int>p1;
    p1.first="aditya";
    p1.second=53;
    m.insert(p1);

    pair<string,int>p2;
    p2.first="aman";
    p2.second=54;
    m.insert(p2);


    pair<string,int>p3;
    p3.first="shiva";
    p3.second=55;
    m.insert(p3);


    cout<<endl;
    //how to print the elemnt 
    for(auto p: m){
        cout<<p.first<<"  "<<p.second<<endl;
    }
    cout<<endl;
}