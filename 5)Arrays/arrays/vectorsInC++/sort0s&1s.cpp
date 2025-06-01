#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>&v){
        for(int i=0;i<v.size();i++){
           cout<<v[i]<<"  "; 
        }
        cout<<endl;
}

int main(){
    // method_1 for ittere
    // vector<int>v={0,1,0,0,1,1,0,1};
    // printVector(v);
    // int noz=0;
    // int noo=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==0)noz++; // 
    //     if(v[i]==1)noo++;
    // }
    // for(int i=0;i<v.size();i++){
    //      if(i<noz)v[i]=0;
    //      if(i>=noz)v[i]=1;
    // }
    //  printVector(v);


    // method_2
    vector<int>v={0,1,0,0,1,1,0,1};
    printVector(v);
    int i=0;
    int j=v.size()-1;
    
    while(j>i){
        if(v[i]==0)i++;
        if(v[j]==2)j--;
        if(i>j)break; // ye iss liye break condition lagane ki zarurat hai kyoo ki agar 
        if(v[i]!=0&&(v[j]==0||v[j]==1)){
            swap(v[i],v[j]);
            i++;
            j--;
            
        }
    }
     printVector(v);
}

