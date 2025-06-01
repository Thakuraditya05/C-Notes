#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void strPrinting(string &s){
    for(int i=0;i<s.length();i++){
      cout<<s[i]<<" ";
     
   }
   
    cout<<endl; 
}
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end()-5);
    sort(s.begin(),s.end()-5);
    strPrinting(s);
}




