// removes dublicate from strings 
// string me se remove krna hai duplicates 
// behuda question  bro;

#include<iostream>
#include<stack>
#include <algorithm>  // For std::reverse
#include <string>     // For std::string
using namespace std;

string uniqueString(string &s){
        stack<char>ch;
        ch.push(s[0]);
        for(int i=0;i<s.length();i++){
            if(s[i]!=ch.top())ch.push(s[i]);
        }
        s="";
        while(ch.size()>0){
            s.push_back(ch.top());
            ch.pop();
        }
        reverse(s.begin(),s.end());
        return s;
        

}

int main(){
    string s="aaabbcddaabffg";
    cout<<uniqueString(s);
}