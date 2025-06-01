#include<bits/stdc++.h>
using namespace std;
int x=3; // can be accessed any where but priorty given to local scope
void arg(int a, int b){//formmal parameter
    cout<<x<<endl; // can be access
    cout<<&a<<endl;
    cout<<&b<<endl;
    x=5;//
     cout<<x<<endl; 
}
int main(){
    cout<<x<<endl;// can be access//3
    int a=2,b=3;// actal parameters
    cout<<&a<<endl;
    cout<<&b<<endl;
    arg(a,b);
    cout<<x<<endl;
}