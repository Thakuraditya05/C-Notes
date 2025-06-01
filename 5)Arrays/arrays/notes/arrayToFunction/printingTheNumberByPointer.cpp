#include<bits/stdc++.h>
using namespace std;
int main(){
        int arr[]={3,4,5,6,7,8};
        int n=sizeof(arr)/sizeof(arr[0]);  
        int* ptr=arr;
        for(int i=0;i<n;i++){
                cout<<(*ptr)<<" "<<(ptr)<<endl;
                ptr++; 
        }
        ptr=arr;
        
         
}