#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,7,7,8,9,4,5,1,5};
    int count=0,x;
    bool flag=false;
    cin>>x;
    for(int i=0;i<=9;i++){
        if(arr[i]>=x){
            count++;
            flag=true;

        }
    }
    
    if(flag==false)cout<<"no num greater than  "<<x;
    else cout<<count++;
}