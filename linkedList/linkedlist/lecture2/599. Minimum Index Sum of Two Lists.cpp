// 599. Minimum Index Sum of Two Lists
// vector bana lo orr usme se push krte jaao and push krne se pahle chck kr lo ki kahi uske under wo node pahle se to nahi hai 
#include<iostream>
using namespace std;
class ListNode{ //user defined data type
public: 
    int val;
    ListNode* next;
    ListNode(int val ){
        this->val=val;
        this->next=NULL; 
    }

};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;

        // if (head == NULL || head->next == NULL) {
        //     return false;
        // }
        // ListNode* slow = head;
        // ListNode* fast = head->next;
        // while (fast != slow) {
        //     slow = slow->next;
        //     fast = fast->next->next;
        //      if (fast->next == NULL || fast->next->next == NULL)return false;
        // }
        // return true;
    }
};