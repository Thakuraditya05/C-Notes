#include<bits/stdc++.h>
using namespace std;
 // one advantage of arr vver vector is that arr is automatic pass by referenec
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"voiid function end here"<<endl;
}
void change(int b[]){// explicity size is passed
    b[0]=100;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // acccess the element of array in another function
    display(arr,n);//arr address
    change(arr); // passing the array address 
    display(arr,n); // passing  arra adddress



}   