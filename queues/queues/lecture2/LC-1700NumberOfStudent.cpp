#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int i=0;// traverse the sandwich;
        int count=0;
        while(q.size()>0 && count!=q.size()){
            if(q.front()==sandwiches[i]){
                count=0;
                q.pop();
                i++;
            }
            else{
                count++;
                q.push(q.front());
                q.pop();
            }
        }
    return q.size();
    }

};
int main(){
    
}