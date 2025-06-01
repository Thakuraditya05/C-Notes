#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        unordered_set<int>s;
        for(int ele: arr){
            s.insert(ele);
        }
        for(int i=100;i<=999;i+=2){
            int x=i;
            int a=x%10;
            x/=10;
            int b=x%10;
            x/=10;
            int c=x;
            if(s.find(a)!=s.end()){
                s.erase(a);
                if(s.find(b)!=s.end()){
                    s.erase(b);
                    if(s.find(c)!=s.end())ans.push_back(i);
                    s.insert(b);
                }
                s.insert(a);
            }

        }
        return ans;
    }
};











// m-2 using map but same intuition built ki 
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int ele: arr){
            m[ele]++;
        }
        for(int i=100;i<=999;i+=2){
            int x=i;
            int a=x%10;
            x/=10;
            int b=x%10;
            x/=10;
            int c=x;
            if(m.find(a)!=m.end()){
                m[a]--;
                if(m[a]==0)m.erase(a);
                if(m.find(b)!=m.end()){
                    m[b]--;
                    if(m[b]==0)m.erase(b);
                    if(m.find(c)!=m.end())ans.push_back(i);
                    m[b]++;
                }
                m[a]++;
            }

        }
        return ans;
    }
};



























int main(){

}