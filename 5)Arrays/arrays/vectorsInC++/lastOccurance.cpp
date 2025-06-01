// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// void takeIPVector(vector<int>&v,int num){
//          for(int i=0;i<num;i++){
//            cin>>v[i];
//         }
// }
void printVector(vector<int>&v){
    cout<<v.size()<<" "<<"just start printing"<<endl;
         for(int i=0;i<v.size();i++){
           cout<<v[i]<<"  "<<i<<endl; 
        }
}

int main(){
    vector<int>v={1,2,7,4,5};
    int num=v.size();
    int x=7;
    bool flag=false;
    // takeIPVector(v,num);
    for(int i=num-1;i>=0;i--){
        if(v[i]==x){
            flag=true;
            cout<<"last occurance"<<x<<" "<<i<<endl;
            break;
        }

    }
     if(flag==false)cout<<"no occurance";
    

} 

