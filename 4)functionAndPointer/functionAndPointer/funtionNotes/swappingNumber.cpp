#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;

    cout<<a<<"  "<<b<<endl;
}
int main(){
    int a=2;
    int b=5;
    cout<<a<<"  "<<b<<endl;
    swap(a,b);    
    cout<<a<<"  "<<b<<endl;
}
 