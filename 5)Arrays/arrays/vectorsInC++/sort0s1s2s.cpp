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
    vector<int>v={2,0,2,1,1,0};
    int noz=0;
    int noo=0;
    int twos=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0)noz++; // 
        if(v[i]==1)noo++;
        if(v[i]==2)twos++;

    }
    for(int i=0;i<v.size();i++){
         if(i<noz)v[i]=0;
         if(i>=noz && i<noz+noo)v[i]=1;
         if(i>=noz+noo)v[i]=2;
    }
}












