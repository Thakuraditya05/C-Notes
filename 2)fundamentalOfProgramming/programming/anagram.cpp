#include <bits/stdc++.h>
using namespace std;
int main(){
    int z=0;
    for (int i = 1; i <= 500; i++){
        int cubeX=0;
        int x=i;// 1  
        while (x != 0){  // 1 0
            z = x % 10; // 1
            x /= 10;    // 0
            cubeX += z*z*z;
        }
        if (cubeX == i)cout<<i<<"  "<<"anagram"<<endl;
    }
}