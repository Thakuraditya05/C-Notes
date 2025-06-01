#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v = {4, 2, 3, 7, 3, 2, 4};
    int n= v.size();
        bool flag=true;
        int i=0;
        int j=v.size()-1;
        while(j>i){ // 06 15
           if( !(v[i]==v[j])){//  
               cout<<"no pallindrome";
               flag=false;
               break;
           }
            i++;
            j--;
        }
     if(flag==true)cout<<"yes this is pallindreom";
    

    
}