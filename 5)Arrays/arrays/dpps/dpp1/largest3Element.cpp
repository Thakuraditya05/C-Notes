#include<bits/stdc++.h>
using namespace std;
int main(){
    // linear search 
        int arr[]={8,7,5,3,1,6};
        int n=sizeof(arr)/sizeof(arr[0]);
        int  m=INT_MIN;
        int s=INT_MIN;
        int t=INT_MIN;
        for(int i=0;i<n;i++){
          if(arr[i]>=m)m=arr[i];
        } 
        cout<<"max="<<m<<endl;
        // 2nd loop me max ki value se choti value honi chahiye and min se badi honi chahiye 
        for(int i=0;i<n;i++){
          if(arr[i]>=s &&arr[i]<m)s=arr[i];
        } 
        cout<<"2nd_Max="<<s;
        // 3nd loop me max ki value se choti value honi chahiye and min se badi honi chahiye 
        for(int i=0;i<n;i++){
          if(arr[i]>=t && arr[i]<s &&arr[i]<m)t=arr[i];
        } 
        cout<<"3nd_Max="<<t<<endl;

}