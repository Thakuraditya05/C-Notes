#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;


// baar baar mtlab sortr krne ka matlab hai heaps 
// arr
// find size 
// variable cost 
// min heap 
// loop for pq.push(); array lemnt inheaps 
// while loop till heaps size > 1
        // fir ek lement bahar nikala 
        // pop 
        // dusara ele  bahar niakala
        // pop
        // if ussi heap me push usski ke addition ko 
        // and min coste wale variable ko maintiant ktr liya 
// fir print kara  diya 


int main(){
    int arr[]={};
    int n=sizeof(arr)/4;
    int minCost=0;
    // min heaps pq
    for(int i=0;i<n;i++){
        int x=pq.top(); pq.pop();
        int y=pq.top(); pq.pop();

        pq.push(x+y);
        minCost+=(x+y);


    }

    cout<<minCost;
}












