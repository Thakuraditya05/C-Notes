// length barabr nahii hui to dikkat ho  jayegi 
// for set of charecter baraber hone chahiye 
// frequancy same honi chahiye bs frequncies ki 

// fir uske baad wo dono map same hue to return map;

#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
#include<climits>
#include<unordered_map>

using namespace std; 
class TreeNode{
public: 
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){

        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.length()!=str2.length())return false;
        unordered_map<char,int>mp1,mp2;
        // doni map bahar aja raha hai chara and uski frequncy ke saath 
        // 
        for(int i=0;i<str1.length();i++){
            mp1[str1[i]]++;
            mp2[str2[i]]++;
        }
        // compare krna start karo 
        for(auto x: mp1){
            char ch=x.first;
            if(mp1.find(ch)==mp2.end())return false;
        }
        // helper function hash map bana rahe hai taki frequncy of frequcy ko track kiya ja sake 
        // dono hash map ko bhar do
        unordered_map<int,int>h1,h2;
        for(auto x:mp1){
            int freq=x.second;
            h1[freq]++;
        }
        for(auto x:mp2){
            int freq=x.second;
            h2[freq]++;
        } 
        // comparing helper1 and helper2 maps;
        for(auto x: h1){
            int key=x.first;
            if(h2.find(key)==h2.end())return false;
            if(h2[key]!=h1[key]) return false;
        }
        return true;
    }
};