#include<bits/stdc++.h>
using namespace std;
int main(){
        int arr[]={3,4,5,6,7,8};
        // int arr[]={0,1,2,3,6,7,8};
        // int arr[]={0,1,2,3,4,5,6};
        // int arr[]={0,1,2,3,4,5,6,7,8};
        int n=sizeof(arr)/sizeof(arr[0]);  
        int smallest=0;      
        bool flag=false;
        for(int i=0;i<n;i++){ // 0
          if(!(arr[i]==i)){
            smallest=i;
            flag=true;
            break;
          }

        } 
     if(flag==true)cout<<"missing smallest is "<<smallest<<endl;
     if(flag==false)cout<<"missing smallest is "<<n<<endl;

        
         
}