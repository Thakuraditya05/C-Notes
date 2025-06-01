#include<iostream>
#include<cmath>
using namespace std;
// do this question as a rivision marks 
// find factors then sum then repplace and agin find factors 
class Solution {
public:
    int perfect(int num){
    int sum=0;
    for(int i=2;i<sqrt(num);i++){
         if(num%i==0){
            sum+=i;
            sum+=(num/i);
         }
     }
     return sum;
 
    }
    
    bool checkPerfectNumber(int num) {
        if(num==1)return false;
        return (num==(perfect(num)+1));
    }
};