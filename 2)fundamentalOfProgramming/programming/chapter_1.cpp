// Given three points (x1, y1), (x2, y2) and
//  (x3, y3), write a program to check if all the three points fall on one straight line
#include<iostream>
#include<cmath> 
 using namespace std;
 int main() {
      int x1,x2,x3,y1,y2,y3;
      cin>>x1>>x2>>x3>>y1>>y2>>y3;
//   abs() is typically for integers. If you want to use absolute values for float numbers, you need to use fabs() instead (from the <cmath> library).
    float z=(0.5)*fabs(x1*(y3-y2)+x2*(y3-y1)+x3*(y1-y2));
    if(z==0){
        cout<<"co-linear";
    }
    cout<<z;

 }