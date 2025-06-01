#include<bits/stdc++.h>
using namespace std;

/// approach
int gcd(int a, int b){ 
    while (b != 0) {
        a = a % b;  // Get remainder
        swap(a, b); // Swap a and b
    }
    return a;  // When b becomes 0, a is the GCD
}
// int gcd(int a, int b){ // 24 60 
//     int c=0;  // 0 
//         while(true){
//         c=a%b; //12 0
//         if(c==0) return a;
//         a=c; // 12
//         b=a; //24
//     }
// }

int main(){

    // mathod_1
    // int x,y;
    // cin>>x>>y;
    // for(int i=min(x,y);i>0;i--){
    //     if(x%i==0 && y%i==0){
    //         cout<<i;
    //         break;
    //     }
    // }

    // method_2
    int x,y;
    cin>>x>>y;
    int a=min(x,y);
    int b=max(x,y);
    cout<<gcd(a,b)<<endl;

}