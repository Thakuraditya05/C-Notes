//lecture number 239 dubara padhna hai or to or stack wala 
// previous greatest elemtnt dekhna padega 




//deque increase orer me idx rakhenge 
// ________________________________________
// ________________________________________
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
// approch 
class Solution{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1)return nums;
        int n=nums.size();
        deque<int>dq; //decreaseing order of elemnt (index)
        vector<int>ans; //i should be min k-1;
        for(int i=0;i<n;i++){
            while(dq.size()>0 && nums[i]>dq.back())dq.pop_back();
            dq.push_back(nums[i]);
            if(i>=k-1)ans.push_back(dq.front());
        }
        return ans;
    }
};

// sahi hai ye wala 
