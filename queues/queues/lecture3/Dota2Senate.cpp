//  bahuy gajab sa question hai ye wala ausam se upper level ka hai ye wala question 
// either 3 queue bana lo and or countD and CountR 
// 
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

// sahi hai ye wala 
class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int>q;
        queue<int>r;
        queue<int>d;
        for(int i=0;i<s.length();i++){
            q.push(i);
            if(s[i]=='R') r.push(i);
            if(s[i]=='D') d.push(i);
        }
        while(q.size()>1){
            if(s[q.front()=='X']) q.pop();
            else if(s[q.front()]=='R'){
                // check for victory 
                if(d.size()==0) return "Radiant";//"Dire if (s[q.front()] == 'R') return "Radiant";
                else {// take right of next Of D
                    s[d.front()]='X';
                    d.pop();
                    // work is done 
                    q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();

                }
            }
            else {// s[q.front()=='D']
                 //  check for victory 
                if(r.size()==0) return "Dire";//"Dire
                else {// take right of next Of R
                    s[r.front()]='X';
                    r.pop();
                    // work is done 
                    q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();   
                }
            }
        }
   
     if(s[q.front()=='R'])return "Radiant";
     else  return "Dire";
    }

};