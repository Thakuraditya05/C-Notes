#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[7]; // 7 int type space  create kr do //The [] is used to declare the array
    // int x[5]; // array of size 5 whose 1st variable is x
    // x[3]=5; // 3rd index should be equal to 5 of array x 
    // x[0]=10; // 
    // x[3]=18;// index get updated 
    int arr[3] = {1, 2, 3}; //the initializer for the array should use curly braces {} 
    //agar size de diya hai to ussi size ka array initialize krna padega 
    cout<<arr[0]<<endl;
    int n=sizeof(arr)/sizeof(arr[0]); //hamre ppass koi better tarika nahi size nikalne ka 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    


}