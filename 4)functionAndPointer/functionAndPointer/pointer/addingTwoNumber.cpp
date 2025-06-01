#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    
    cin>>x>>y;
    int *p1=&x;
    int *p2=&y;
    cout<<*p1+*p2;

}