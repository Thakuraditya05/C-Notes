// sbki frequency different honichahiye 
// issme bs hame frequnecy check krna hai bs 
// map set 
// ____________________________________
// |(1 1)(21)(22)(12)(13)(31) 
// |____________________________________
#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include <vector>
#include <algorithm> // For sort
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
// make hashmap and fill this map with array element and its freq
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
// fir map me travel karo and ek ek krke fill krte isert krte jaao set ke under and if wo milta hai to return false
        unordered_set<int>s;
        for(auto x: m){
            int freq=x.second;
            if(s.find(freq)!=s.end())return false;
            else s.insert(freq);
        }
        return true;
    }
};