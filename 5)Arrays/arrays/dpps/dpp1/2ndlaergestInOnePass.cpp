#include<bits/stdc++.h>
using namespace std;
int main(){
    // linear search 
        int arr[]={1,4,9,3,7};
        int n=sizeof(arr)/sizeof(arr[0]);
        int  m=INT_MIN;
        int s=INT_MIN;
        for(int i=0;i<n;i++){ // 0 1 2
//continous gerater term aa rahe hai uske just pahle aaane wala 2nd largest ye store karega 
          if(arr[i]>=m){// 1 2 6
            s=m;
            m=arr[i];//1 2 6
          }
// lekin max term ke baad aane ala usse chota terme 2nd loop se check ho jayega 
          if(arr[i]>=s &&arr[i]<m)s=arr[i];
        }  
        cout<<"2nd_Max="<<s;

}