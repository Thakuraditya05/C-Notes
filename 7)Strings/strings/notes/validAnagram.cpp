#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag=true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++){
            if(!((s[i]==t[i])&&(s.length()==t.length()))){
                    flag=false;
                    break;
            }
        }

        
        return flag;

    }
};