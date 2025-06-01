#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>&v){
        for(int i=0;i<v.size();i++){
           cout<<v[i]<<"  "; 
        }
        cout<<endl;
}
int main(){
    vector<int>v;//={1,2,3,4,5,6,1,8,9}
    vector<int>v1;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            v[i]+=v1[j]++;
        }  
    }
    printVector(v);
    printVector(v1);
   
    

    
}