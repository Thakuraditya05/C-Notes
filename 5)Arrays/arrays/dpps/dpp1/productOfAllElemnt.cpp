#include<bits/stdc++.h>
using namespace std;
int main(){
         int arr[]={1,2,3,4,5,6,7,8};
        int n=sizeof(arr)/sizeof(arr[0]);
       
        int product=1;
        for(int i=0;i<n;i++){
        product*=arr[i]; 
        } 
        cout<<product;
}