// https://leetcode.com/problems/split-linked-list-in-parts/

 #include<iostream>
 #include<vector>
 using namespace std;
 class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->next=NULL;
        this->val=val;
    }

 };
// class ListNode {
// public:
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // find the length of original linkedlist 
        int n=0;
        ListNode* temp =head;
        while(temp){
            temp=temp->next;
            n++;
        }
        // breaking the list into k lists 
        vector<ListNode*> ans;
        int size=n/k;
        int rem =n%k;
        temp=head;
        while(temp){
            ListNode* c = new ListNode(100);
            ListNode* tempC = c;
            int s=size;
            if(rem>0)s++;
            rem--;
            for(int i=1;i<=s;i++){
                tempC->next=temp;
                temp=temp->next;
                tempC=tempC->next;
            }
            tempC->next=NULL; // V imp 
            ans.push_back(c->next);
        }
        if(ans.size()<k){
            int extra = k-ans.size();
            for(int i=1;i<=extra;i++){
                ans.push_back(NULL);
            }
        }
        return ans;
    }
};
