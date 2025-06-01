#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        // string--->2d cheej hai ;
        // vector<vector<string>> --->4d vector  
        // 1st way to compare to sorted string in loop called sorting 
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp; //what a hashmap 
        for(string str:arr){
            string lexo=str;
            sort(lexo.begin(),lexo.end());
            if(mp.find(lexo)==mp.end()){
                vector<string>v;
                v.push_back(str);
                mp[lexo]=v;

            }
            else{
                mp[lexo].push_back(str);
            }
            
        }
        for(auto x:mp){
            vector<string>v=x.second;
            ans.push_back(v);
        }
        return ans;
    }
};
// t.c=o(n.k.logk)
// SC=o(n*k)


// array 1st char uthaya usme check usko sort kiya and checj kiya hash map me kya koi orr elemnrt hai agar nahi hai usko ek aaray assigned kr do and usme push kr do
// hash map me {key, value} = sortedString, vector of string   