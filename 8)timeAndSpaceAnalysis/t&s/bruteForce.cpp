#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    bool flag=false;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                cout<<v[i];
                flag=true;
                break;
            }
        }        
    }
    if(flag==false) cout<<"no uniqueness";

    
}