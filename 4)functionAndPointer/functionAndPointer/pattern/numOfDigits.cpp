#include <bits/stdc++.h>
using namespace std;
int numOfDigits(int num){
    int count=0;
      while(num!=0){
        count++;
        num/=10;
      }
      return count;
}
int main(){
    int num;
    cin>>num;
    cout<<numOfDigits(num);
    cout<<"  "<<num*num<<endl;

}
//  Can the same function name be used for different functions without any conflict
// yes if return type is different 