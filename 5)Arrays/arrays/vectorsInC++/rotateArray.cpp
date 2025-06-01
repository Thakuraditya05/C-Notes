// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>&v){
 
        for(int i=0;i<v.size();i++){
           cout<<v[i]<<"  "; 
        }
}

int main(){
    vector<int>v={1,6,2,3,7,4};
    vector<int>v2(v.size());
    int k=2;
    int j=v.size()-k;//6-4=2

    printVector(v);
    cout<<endl;
    for(int i=j;i<v.size();i++){ //2 3 4 5 
        v2[i-j]=v[i];
    }

    for(int i=0;i<j;i++){ //0 1 
        v2[k+i] =v[i];
    }
 
    printVector(v2);
     cout<<endl;
} 

