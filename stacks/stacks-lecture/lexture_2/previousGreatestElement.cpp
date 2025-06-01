 

#include<iostream>
#include<stack>
#include <algorithm>  // For std::reverse
#include <string>     // For std::string
using namespace std;

int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // prv greater elemnt 


    // using stack pop ansMarkin and push and reverse traverse
    // sc(n) tc(n)
    int pge[n];
    stack<int>st;
    pge[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){ 
        // pop all the elemnt smaller than arr[i];
        while(st.size()>0&&st.top()<=arr[i])st.pop();
        // marks  the ans in nge array
        if(st.size()==0)pge[i]=-1;
        else pge[i]=st.top();
        // push the arr[i];
        st.push(arr[i]);

    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;


}