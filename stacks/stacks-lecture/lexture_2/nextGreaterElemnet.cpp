// next greater elemnt 
// 3 1 2 5 4 6 2 3 ---> 5 2 6 6 -1 3 -1
// traverse from last kyo ki last me -1 kko to dalna hi dalna hai last se start kr dete hai 
// hrr last se index me stacks me dalte jayenge and ek max char ko maintain kr te jayenge 
// pop ans(mark the ans) push;
// while(arr[i]>st.top()) st.pop()
// ans[i]=st.pop;
// st.push(arr[i]);

#include<iostream>
#include<stack>
#include <algorithm>  // For std::reverse
#include <string>     // For std::string
using namespace std;

int nextGreaterBruteFroce(int arr[],int n){
        
}

int nextGreater(int arr[],int n){
        stack<int>st;
}


int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // next greater elemnt 
    // brute force tc(n^2), sc=(1)
    // int nge[n];;
    // for(int i=0;i<n;i++){
    //     nge[i]=-1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]){
    //             nge[i]=arr[j];
    //             break;
    //         }
    //     }
    // }

    // using stack pop ansMarkin and push and reverse traverse
    // sc(n) tc(n)
    int nge[n];
    stack<int>st;
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){ 
        // pop all the elemnt smaller than arr[i];
        while(st.size()>0&&st.top()<=arr[i])st.pop();
        // marks  the ans in nge array
        if(st.size()==0)nge[i]=-1;
        else nge[i]=st.top();
        // push the arr[i];
        st.push(arr[i]);

    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;


}