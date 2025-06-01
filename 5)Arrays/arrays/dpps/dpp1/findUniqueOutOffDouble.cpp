#include<bits/stdc++.h>
using namespace std;

int main() {

    // method m1 brute force 


    vector<int>v = {4, 3, 2, 7, 3, 2, 4};
    int n= v.size();

    for(int i=0;i<n-1;i++){  // 
       bool flag=true;
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                flag=false;
                // cout<<v[i]<<" "<<"is not unique element"<<endl;
            }
        }
        if(flag==true) {
            cout<<v[i]<<" "<<"is unique element"<<endl;
            break;
        }
        
    }
    

     

     // method m2 from extra arrray approch but we cant use here because 

    vector<int>v1 = {4, 3, 2, 7, 3, 2, 4};;
    int n= v1.size();
    vector<int>v2(n,0);

    for(int i=0;i<n;i++){
        v2[v1[i]]++;//  v2[1]++ === 0+1==1
    }

    for(int i=0;i<v2.size();i++){

       if(v2[i]==1){
        cout<<v2[i]<<" "<<" element is unique in nature";
        break;
       }
    }



    
}