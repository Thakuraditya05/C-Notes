#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,1,8,9};
    int n=v.size();
    int j=0;
    vector<int>v1(n+1,0);
    bool flag=false;
    for(int i=0;i<v.size();i++){
        j=v[i];
        if(v1[j]==0){
           v1[j]++;
        }else{ //
            cout<<"duplicate element  "<<" "<<v[i]; 
            flag=true;
            break;
        }

    }
    if(flag==false) cout<<"uniqueness";

    
}