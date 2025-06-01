// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
// but iss case me olde vector se kaam chall raha hai 

void vectorPassByRefre(vector<int>&v){
        cout<<&v<<"pass by referance"<<endl;

}
//but iff iiss case me new vectpr create hoga memory me
void vectorPassByValue(vector<int>v){
        cout<<&v<<"pass by value"<<endl;

}
int main(){
        vector<int>v;
        cout<<&v<<" "<<"created here"<<endl;
        vectorPassByValue(v);
        vectorPassByRefre(v);
} 

