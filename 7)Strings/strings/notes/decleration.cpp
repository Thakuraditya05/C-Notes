#include<iostream>
#include<string.h>
using namespace std;

void printStr(char str[],int num){
    for(int i=0;i<num;i++){
      cout<<str[i]<<" ";
     
   }
    cout<<endl; 
}
int main(){
    // "\0"--->null orr end of string kabhi bhi print nahi ha ye bhagwana ki trah hota hai isska exsitance to dikhayi deta 
   string s ="aditya singh"; // even though "\0"-exists but its nature in length is countable 
   string t;
   cin>>t; // only 1st gap tk hi leta hai uske baad break krd eta hai 
   cout<<s<<endl<<t<<endl;
   cout<<s[0]<<endl<<s.length();

    char str[]={'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    cout<<str<<endl; /// pura strig array print ho raha  hai 
    int arr[]={1,2,3,4,5,6,7};
    cout<<arr<<endl;// address prnt ho raha hai
}