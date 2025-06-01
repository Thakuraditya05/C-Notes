#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks[5];
    bool flag= false;
    int n=sizeof(marks)/sizeof(marks[0]);
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]<=35){
            cout<<marks[i]<<endl;
            flag=true;
        }
    }
    if(flag==false)cout<<"no marks below 35 exits";

}