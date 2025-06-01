#include<iostream>
#include<unordered_map>
using namespace std;
// pair class 
int main(){
    unordered_map<string, int>m;
    // unordered_map<key,value>m 
    m["aditya"]=53;
    m["aman"]=54;
    m["tanmay"]=55;
    cout<<m.size();
    //how to print the elemnt 
    for(auto p: m){
        cout<<p.first<<"  "<<p.second<<endl;
    }
    cout<<endl;
    m.erase("sanet");
    m.erase("aditya");
 cout<<m.size();
 cout<<endl;
    for(auto p: m){
        cout<<p.first<<"  "<<p.second<<endl;
    }
    cout<<endl;
    // individual printing 
    cout<<m["tanmay"]<<endl;
}