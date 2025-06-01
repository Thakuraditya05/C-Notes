#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;

void strPrinting(string &s){
    cout<<&s<<"="<<&(s[0])<<endl;
    for(int i=0;i<s.length();i++){
      cout<<s[i]<<" ";
     
   }
   
    cout<<endl; 
}
int main(){
  string s ="leetcode"; // even though "\0"-exists but its nature in length is countable 
    vector<int>v(26,0);
    int m=INT_MIN;
    int idx=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i]; //
        int j=int(ch);//
        v[j-96]++;
    }


    for(int i=0;i<v.size();i++){
        // m=max(m,v[i]);
        if(m<=max(m,v[i])){
            m=max(m,v[i]);
            idx=i;
        }
    
    }

    cout<<m<<"  "<<idx;





}