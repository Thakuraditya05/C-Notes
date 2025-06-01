#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
class Solution {
    public:
        int lastStoneWeight(vector<int>& arr) {
            priority_queue<int>pq;
            for(int ele: arr){  // o(n*logn)
                pq.push(ele);
    
            }
            while(pq.size()>1){// o(n*logn)
                int x=pq.top();  pq.pop();
                int y=pq.top();  pq.pop();
                if(x!=y)pq.push(abs(y-x));
            }
            if(pq.size()==1)return pq.top();
            else return 0;
        }
    };
    
    
    // do the same question with sorting 
    // 2 7 4 1 8 1 
    // 1 1 2 4 7 8 
    // 1 1 2 4 1 
    // 1 1 1 2 4 
    // 1 1 1 2 
    // 1 1 1 2 
    // 1 1 1 
    // 1 

    class Solution {
        public:
            int lastStoneWeight(vector<int>& arr) {
                while(arr.size()>1){// o(n*logn)
                    sort(arr.begin(),arr.end());
                    int x=arr[arr.size()-1];
                    arr.pop_back();
                    int y=arr[arr.size()-1];
                    arr.pop_back();
                    if(x!=y)arr.push_back(abs(x-y));
                }
                if(arr.size()==1) return arr[0];
                else return 0;
            }
        };
        
        
 












// int main(){
//     priority_queue<int> pq;
//     for(int i=0;i<.size();i++){
//         pq.push(stones[i]);
//     }
//     while(pq.size()>1){
//         int rem;
//         int y=pq.top();
//         pq.pop();
//         int x=pq.top();
//         pq.pop();
//         if(x!=y){
//             rem=y-x;
//             pq.push(rem);
//         }
//     }
//     if(pq.size()==1){
//         return pq.top();
//     }
//     return 0;
// }




























