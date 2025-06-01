#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<unordered_map>
typedef pair<int,int>pi;

using namespace std;
class Solution {
    public:
       typedef pair<int,int>pi;
        vector<int> topKFrequent(vector<int>& arr, int k) {
           
            unordered_map<int,int>mp;
        // map pair is elemnt and frequency 
        for(int ele: arr){
            mp[ele]++;
        }
        // heap pair is freq, elemnt 
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for(auto x:mp){
            int ele=x.first;
            int freq=x.second;
            pair<int,int>p={freq,ele};
            pq.push(p);
            // pq.push({x.second,x.first});
            if(pq.size()>k)pq.pop();
        }   
        vector<int>ans;
        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    
    
    } 
        };