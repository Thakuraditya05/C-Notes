#include<iostream>
#include<unordered_set>
#include<vector>
#include<string>
#include<algorithm> //->reverse
using namespace std;
// words consists of distinct strings  words = ["cd","ac","dc","ca","zz"] here observe ZZ;
// m1
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n=arr.size();
        int count=0;
        for(int i=0; i<n;i++){
            string rev = arr[i]; //hmm string copy kyoo bana rahhe hai
            reverse(rev.begin(),rev.end()); //pri-defined note hai ye  
            for(int j=i+1; j<n;j++){
                if(rev==arr[j])count++;
            }
        }
        return count;
    }
};

// m2


// unorder  set me finde krne ki complexity o(1) hai;


class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n=arr.size();
        int count=0;
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            string rev=arr[i];
            reverse(rev.begin(),rev.end());
            if(arr[i]==rev)continue;
            if(s.find(rev)!=s.end()){//if the element is found
                count++;
                s.erase(arr[i]);
            }
        }

        return count;

    }
};

// m3

// unorder  set me finde krne ki complexity o(1) hai;


class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n=arr.size();
        int count=0;
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            string rev=arr[i];
            reverse(rev.begin(),rev.end());
            if(arr[i]==rev)continue;
            if(s.find(rev)!=s.end()) count++;
            else s.insert(arr[i]);
        }
    

        return count;

    }
};





















