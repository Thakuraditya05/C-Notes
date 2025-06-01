#include<bits/stdc++.h>
using namespace std;
void firstAndLastDigit(int* num, int* lastDigit){
    (*lastDigit) = (*num)%10;
    int n=(*num);
    while(!(n<=9)){
        n/=10;
    }
    (*num) =n;
}
int main(){
    int num;
    int lastDigit =0;
    cin>>num;
    firstAndLastDigit(&num, &lastDigit);
    cout<<num<<" "<<lastDigit;
    
}