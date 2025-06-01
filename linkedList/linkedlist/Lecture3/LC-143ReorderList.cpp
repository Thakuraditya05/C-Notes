// partition list 
// middle
// reverse ka conceot lagega 

// 1 2 3 4 5 6 ----> 1 6 2 5  3 4
// plindrom linked list 1 2 3 4 5 6 --->1 2 3 6 5 4 and pointer maintain karo and b ke naam pe a ko before 
// merge 2 shorted list 1 2 3-->NULL, 6 5 4->NULL
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head){
//         if(head==NULL||head->next==NULL) return head;
//         ListNode* newHead=reverseList(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newHead;
//     }
//     void reorderList(ListNode* head) {
//         ListNode* slow=head;
//         ListNode* fast =head;
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         // slow is at left middle/middle
//         ListNode* b=reverseList(slow->next);
//         ListNode* a=head;
//         slow->next=NULL; //breaking the list 
//         //merge thses two-  a and b alternatively 
//         ListNode* c= new ListNode(100);
//         ListNode* tempC=c;
//         ListNode* tempA=a;
//         ListNode* tempB=b;
//         while(tempA && tempB){
//             tempC->next=tempA;
//             tempA=tempA->next;
//             tempC=tempC->next;
//             tempC->next=tempB;
//             tempB=tempB->next;
//             tempC=tempC->next; //
//         }
//             tempC->next=tempA;
//             head=c->next;
//     }
// };


