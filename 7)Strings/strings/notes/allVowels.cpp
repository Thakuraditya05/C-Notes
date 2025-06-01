#include<iostream>
#include<string.h>
using namespace std;

void str(char str[],int num){
    for(int i=0;i<num;i++){
      cout<<str[i]<<" ";
     
   }
    cout<<endl; 
}
int main(){
    string s ="aditya singh"; // even though "\0"-exists but its nature in length is countable 
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
            cout<<"it is vowel"<<" "<<s[i]<<endl;
        }
    }

    
}