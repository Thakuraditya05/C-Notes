// Given an array of integers, change the value of all odd indexed elements to its second multiple 
// and increment all even indexed values by 10.

#include<bits/stdc++.h> 
using namespace std;

void printArray(int arr[],int n){
         for(int i=0;i<n;i++){
           cout<<arr[i]<<"  "; 
        }
        cout<<endl;
}
int main(){
        int arr[]={8,7,5,3,1,6};
        int n=sizeof(arr)/sizeof(arr[0]);
        printArray(arr,n);
        for(int i=0;i<n;i++){
          if(i%2==0)arr[i]=(arr[i]*2);
          else arr[i]=(arr[i]+10);
        }
        printArray(arr,n);


}