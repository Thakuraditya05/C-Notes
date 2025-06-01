// slinding window important hai 
// m1 hrr window me visit karo and and brute force nikalo ki max element kon sa hai 
// time limit excedde
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<stack>
using namespace std;
vector<int> maxSlidingWindow(vector<int>&arr, int k){
    vector<int>ans;
    int n=arr.size();
    for(int i=0;i<n-k+1;i++){
        int mx=INT_MIN;
        for(int j=i;j<=k+i;j++){
            mx=max(mx,arr[j]);
        }
        ans.push_back(mx);
    }
    return ans;
}


// m-2
// hint greatest elemnt 
// let form next greater element ka index,  array
// fir check karo
vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
    int ngi[n];
    stack<int>st;
    ngi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){ 
        // pop all the elemnt smaller than arr[i];
        while(st.size()>0&&arr[st.top()]<=arr[i])st.pop();
        // marks  the ans in nge array
        if(st.size()==0)ngi[i]=n;
        else ngi[i]=st.top();
        // push the arr[i];
        st.push(i);
    }
    vector<int>ans;
    for(int i=0;i<n-k+1;i++){ 
        int mx=arr[i]; //starting of window 
        int j=i;
        while(j<i+k){//means if nge is inside window 
                mx=arr[j];
                j=ngi[j];
        }
        ans.push_back(mx);

    }
    return ans;
    }

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
    int ngi[n];
    stack<int>st;
    ngi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){ 
        // pop all the elemnt smaller than arr[i];
        while(st.size()>0&&arr[st.top()]<=arr[i])st.pop();
        // marks  the ans in nge array
        if(st.size()==0)ngi[i]=n;
        else ngi[i]=st.top();
        // push the arr[i];
        st.push(i);
    }
    vector<int>ans;
    int j=0;
    for(int i=0;i<n-k+1;i++){ 
        if(j<i) j=i;
        int mx=arr[j]; //starting of window 
        
        while(j<i+k){//means if nge is inside window 
                mx=arr[j];
                if(ngi[j]>=i+k)break;
                j=ngi[j];
        }
        ans.push_back(mx);

    }
    return ans;
}

int main(){
   int  nums[] = {1,3,-1,-3,5,3,6,7}, k = 3;
    // maxSlidingWindow(nums,k);
}



    

