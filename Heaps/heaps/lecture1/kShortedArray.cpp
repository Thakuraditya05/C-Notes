#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;
int main(){ 
    int arr[] = {10,-5,2,-9,8,7,5};
    int k=3;
    int n=sizeof(arr)/4;
    priority_queue<int, vector<int>, greater<int>> pq; //min heap
    vector<int>ans;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<n;i++){
         cout<<ans[i]<<' ';
    }

     

 


}