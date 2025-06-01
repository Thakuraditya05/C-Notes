// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//             int arr[] =  {10, 2, 8, 5};
            
        

//         int n=sizeof(arr)/sizeof(arr[0]);
//         int  m=arr[0];
//         bool flag=true;
//         for(int i=1;i<n;i++){
//           if(arr[i]>=m)m=arr[i];
//           else {
//             flag=false;
//             cout<<arr[i]<<"="<<i<<" "<<"is not sorted";// is not sorted
//             break;
//           }
//         } 

//         if(flag==true)cout<<"is sorted";


// }











// asecending and desecnding both

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 8, 5, 2};  // Example array sorted in descending order
    
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ascending = true;
    bool descending = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            ascending = false;
        }
        if (arr[i] > arr[i - 1]) {
            descending = false;
        }
    }

    if (ascending) {
        cout << "The array is sorted in ascending order.\n";
    } else if (descending) {
        cout << "The array is sorted in descending order.\n";
    } else {
        cout << "The array is not sorted.\n";
    }

    return 0;
}
