#include<bits/stdc++.h>
using namespace std;
int main(){
   int a=15; // 15 
   int* p=&a; //a1500
   int b=++(*p); // a ko 16 kr diya jayega  and b me store bhi wahi karenge( (adress ++ nahi hoga do remeber bracket calcilate hoga 
   cout<<a<<"  "<<b; //   
}