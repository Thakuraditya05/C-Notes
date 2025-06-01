#include<bits/stdc++.h>
using namespace std;
int main(){
     // linear search 
        int arr[]={1,2,3,4,5,6,7,8};
        int n=sizeof(arr)/sizeof(arr[0]);
        bool flag= false;
        int x=4;
        for(int i=0;i<n;i++){
          if(arr[i]==x){
            cout<<arr[i]<<"  "<<i<<endl; 
            flag=true;
            break;

          }
        } 
        if(flag==false)cout<<"element doed not exists";
}