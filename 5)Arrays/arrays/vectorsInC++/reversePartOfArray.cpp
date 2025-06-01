// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>&v){
         for(int i=0;i<v.size();i++){
           cout<<v[i]<<"  "; 
        }
}
void reverseTheArray(vector<int>&v, int i, int j){
    while(j>i){
        int temp =v[j]; //
        v[j]=v[i];
        v[i]=temp;
        i++;
        j--;
    }
}

int main(){
    vector<int>v={1,6,2,3,7,4};
    int n=1,m=4;
    printVector(v);cout<<endl;
    reverseTheArray(v,n,m);
    printVector(v);cout<<endl;
} 

