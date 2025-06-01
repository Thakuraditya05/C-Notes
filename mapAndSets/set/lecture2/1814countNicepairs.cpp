// brute force 
#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution {

public:
    int rev(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + rev(nums[j]) == nums[j] + rev(nums[i]))
                    count++;
             }
        }
        return count;
    }
};



// m2
// do arraya bana lo jisme usko reverse tore ke lo fir ek ko dusare aarray me search kr lo 
// jisme The condition can be rearranged to (nums[i] - rev(nums[i])) == (nums[j] - rev(nums[j])).
// 


// m3
// hash map quantity {42, 11, 1,97};
// hash map quantity {18, 0, 0, 18};
// for every i of nums ====> nums[i]=nums[i]-rev(nums[i]);
// issme cobination wali bhi cheez lagegei 
// brute force 
class Solution {
public:
    int rev(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }
// .......................................................................
    int fact(int n,int r){
         
    }
    int combi(int n,int r){ 
        return fact(n)/(fact(r)*fact(n-r));
    }
// ........................................................................

    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            nums[i]-=rev(nums[i]);
        }
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x: m){
            int f=x.second;
            count+=combi(f,2);
        }
        return count;
    }
};





// m3
 
class Solution {
public:
    int rev(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }


    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            nums[i]-=rev(nums[i]);
        }
        
        // iss  loop me hmm ye karenge ki map me push krte smaya uske number ke count  count dekh lenge and uske number ke count jitna hoga usko hmm apne me count me add kr denge  kr lenge 
        
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                count=count%1000000007;
                count+=m[nums[i]];
                m[nums[i]]++;
            }else m[nums[i]]++;
        }
        
        return count%1000000007;
    }
};











