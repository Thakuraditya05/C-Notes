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
    vector<int>v={1,-2,3,-4,-5,6};
    printVector(v);
    int i=0;
    int j=v.size()-1;
    
    while(j>i){
        if(v[i]<0)i++;// 
        if(v[j]>0)j--;
        if(i>j)break; // ye iss liye break condition lagane ki zarurat hai kyoo ki agar 
        if(v[i]>0&&v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
            
        }
    }
     printVector(v);
}

