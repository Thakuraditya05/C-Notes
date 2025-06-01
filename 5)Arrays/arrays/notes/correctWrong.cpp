#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks[5];
    int a(25);// wrong way to declare 
    int size = 10, b[size]; //correct
    int arr2[]={1,2,3,4};// right way to declare 
     


    // finding lenth of array
    int arr[]={1,3,4,6,7,9}; //arr is pointing variable address to the index zero bite 
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl; // size
    cout<<&arr<<endl;//                                    
    cout<<arr<<endl;//  in array &arr == arr;                               
    // int* c=&arr[0];//                                                 
    // cout<<c<<"  "<<&(arr[0]);//                                     
                                         
// there is continuous memory allocation 
    for(int i=0;i<n;i++){
        cout<<&arr[i];
    }
// lets do some activity 
    int marks[5];
    marks[10]=15;
    cout<<sizeof(marks)<<endl; // 5*4
    cout<<sizeof(marks[0])<<endl; //4
    cout<<sizeof(marks)/sizeof(marks[0])<<endl; //5
    cout<<marks[10]<<endl; //15
}