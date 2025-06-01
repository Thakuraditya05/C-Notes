#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void heapify(int i,int arr[],int n){

    // pop me same kr rahe the but waha pe jis elemnt ko pop kr rahe the uske liye check kr rahe the
    // yaha pe hrr 1 se le ke leaf node ke pahle tk tumjhe aise hi krna padega  
    while(true){
        int left=2*i;
        int right=2*i+1;
        if(left>n)break;
        if(right>n){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
           break;
        }
        if(arr[left]<arr[right]){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
        }
        else{
            if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
        }
    }
}

int main(){
    int arr[]={-1,2,10,14,11,1,4};
    int n=7;
    print(arr,n);
    for(int i=n/2;i>0;i--){
        heapify(i,arr,n);
    }
    print(arr,n);

}