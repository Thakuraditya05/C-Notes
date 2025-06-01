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
// 

#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(4);
    s.insert(6);
    s.insert(7);
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;


}