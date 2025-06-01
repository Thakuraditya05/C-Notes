 
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int lenA=0;
        while(tempA!=NULL){
            lenA++;
            tempA=tempA->next;
        }
        int lenB=0;
        while(tempB!=NULL){
            lenB++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        if(lenA>lenB){
            int diff=lenA-lenB;
            for(int i=1;i<=diff;i++){
                tempA=tempA->next;
            }
            while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }
            return tempA;

        }
        else{
            int diff=lenB-lenA;
            for(int i=1;i<=diff;i++){
                tempB=tempB->next;
            }
            while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }
            return tempA;
            
        }
        return NULL;
    }
};


int main(){
// 1 node ppe kayi saare point kr skte hai  1 node ka kayi saare nde s]address store kr skte hai 
// m-1 brute forcr 2 vectors bana ke of Node pointer type 
// m-2 ulta traverse karo kisisi taraha and 
// m3 length bahar nikalo and diffrence lo fir  

}