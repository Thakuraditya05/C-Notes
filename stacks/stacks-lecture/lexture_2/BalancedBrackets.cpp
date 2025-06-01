// M_1
// let we will form the stack such that and (-->push kr denge stacks me and and if )-->matsh karnge and match hone pr -- kr denge 
// 
#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isBalanced(string &s){
    if(s.length()%2!=0)return false;
    stack<char>ch;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')ch.push(s[i]);
        if(s[i]==')'){
            if(ch.size()==0)return false;
            ch.pop();
        }
    }
    if(ch.size()==0) return true;
    else return false;
}
int main(){
    string s="()()()()"; //()((());
    cout<<isBalanced(s);

}






































