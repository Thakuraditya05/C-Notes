#include<bits/stdc++.h>
using namespace std;
int swap(int* a, int* b){
    int temp =*a;
    *a=*b;
    // cout<<temp<<endl;
    *b=temp;
}
int main(){
    int a=5;
    int b=4;
    cout<<a<<"  "<<b<<endl;
    swap(&a,&b);
    cout<<a<<"  "<<b;


}