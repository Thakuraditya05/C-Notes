#include<iostream>
#include<string.h>
using namespace std;

void strPrinting(string &s){
    cout<<&s<<"="<<&(s[0])<<endl;
    for(int i=0;i<s.length();i++){
      cout<<s[i]<<" ";
     
   }
   
    cout<<endl; 
}
int main(){
   string s ="aditya singh"; // even though "\0"-exists but its nature in length is countable 
//    strPrinting(s);
//     cout<<&s<<endl;
//    s[4]='m'; //individual character is modified able 
//    strPrinting(s);
 strPrinting(s);
    for(int i=0;i<s.length();i++){
      if(i%2==0){
        s[i]='0';
      }
     
    }
     strPrinting(s);
}