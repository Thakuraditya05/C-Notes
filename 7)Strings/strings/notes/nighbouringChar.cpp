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
   string s; // even though "\0"-exists but its nature in length is countable 
   getline(cin,s);
   int count=0;
   if(s[0]!=s[1]){
    count++;
    cout<<"not same type of neighbour element"<<endl;
   }
   if(s[s.length()-1]!=s[s.length()-2]){
        count++;
        cout<<"not same type of neighbour element"<<endl;
   }
   for(int i=1;i<s.length()-1;i++){
      if(s[i-1]!=s[i+1]){// 123456789
        count++;
        cout<<"not same type of neighbour element"<<endl;
      }
    }

    cout<<count;

}