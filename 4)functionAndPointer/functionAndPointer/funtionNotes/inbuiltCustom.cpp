#include <bits/stdc++.h>
using namespace std;
int mini(int x, int y){
   if(x>y)   return x;
   else return y;
}
int main(){
     int m,n;
     cin>>m>>n;
     cout<<mini(m,n);
}