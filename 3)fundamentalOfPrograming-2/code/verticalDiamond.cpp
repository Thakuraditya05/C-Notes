#include <bits/stdc++.h>
using namespace std;
int main(){

    int num;
    cin>>num;
    int outerLoop=num*2-1;
    for(int i=1;i<=outerLoop;i++){

        if(i<=num){
            for(int j=1;j<=i;j++){
              cout<<"*";
            }
        }
        if(i>num){
            for(int j=1;j<=outerLoop-i+1;j++){
              cout<<"*";
            }
        }
        cout<<endl;
        

    }
}
