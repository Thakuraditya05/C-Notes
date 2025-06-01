// randomly element jate hai and unordered me
// and 
// ek sequance me jate hai tunneel ke under but increasing order me jaaet hai 
// and uniqe eelemrnt honge 1 2 5 4  9 5 8 9 4 
// _______________________________________________________________
//  1 2 4 5 8 9 
// _______________________________________________________________
// unorder me printing last in first out hoti hai 
// oreder me sorting krta hai increasing order hai 
// insert /deletion/searching -->tc--->o(logn)===balanced binary search tree




#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    map<int,int>m;
    m[2]=30;
    m[3]=20;
    m[1]=10;
    m[4]=15;
    // 1,30 2,20 3,10  // key  ke hisab se sorting hoti hai naki vallue ke hisab se 
    for(auto x: m){
        cout<<x.first<<"  "<<x.second<<"  "<<endl;
    }
    cout<<endl;
    // 

// in case of string we sorting 
// type of lexicogrphical

    map<string,int>m1;
    m1["aditya"]=30;
    m1["tamay"]=20;
    m1["shiva"]=10;
    m1["aman"]=15;
    // 1,30 2,20 3,10  // key  ke hisab se sorting hoti hai naki vallue ke hisab se 
    for(auto x: m1){
        cout<<x.first<<"  "<<x.second<<"  "<<endl;
    }
    cout<<endl;


}