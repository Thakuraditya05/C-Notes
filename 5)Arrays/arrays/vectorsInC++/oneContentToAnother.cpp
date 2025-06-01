// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[], int num){//,int brr[],
        for(int i=0;i<num;i++){
           cout<<arr[i]<<endl; 
        }

}
int main(){
    // metho1
    // int arr[]={0,1,2,3,4};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int brr[n];
    // for(int i=0;i<n;i++){
    //     brr[n-i-1]=arr[i];

    // }
    // printArray(brr,arr,n);

    // method2
    int arr[]={0,1,2,3,4,5,7}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    for(int i=0;i<n/2;i++){
        int temp =arr[n-1-i]; //
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }
    printArray(arr, n);


} 

