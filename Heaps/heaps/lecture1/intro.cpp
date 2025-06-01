// placement ke terms me imp hai 
// searching bst (ologn)
// 


// small elemnt niche hi jate hai and 
// heaps is just lik ki largest elemnt top pe raheta hai hamesha 
// keval top elemt ko hi keavl pop and push kr skete hai bs 
// cPP me max hip bnata hai and java me min heap bnta hai default case 

#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;
int main(){
    // priority_queue<int>pq;
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(-150);
    // pq.push(10);
    // cout<<pq.top();
    // cout<<endl;
    // pq.pop();
    // cout<<pq.top();
    // pq.push(50);

    priority_queue<int, vector<int>, greater<int>> pq;
     pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(-150);
    pq.push(10);
    cout<<pq.top();
    cout<<endl;
    pq.pop();
    cout<<pq.top();
    pq.push(50);



}






























