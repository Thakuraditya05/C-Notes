// think for the base case 
// break the linked list 
// break the list in three parts --->1tol-1,  ltor,   r+1ton.
// 1 to l-1 ko as it rakho 
// l to r reverse kr do acche se 
// r+1 to n  ko as its is rakho 
// 1 to l-1 --->(joint kr do aise hi )--->reverse(1 to r)---->(r+1 to n);
// temp =head and cont taki length count krte jaae kyo (length na mle orr uss time pe kuch krne ko bola jaaye to ye kr skte hai )
// 4 node ko maintain krna hai 
// n==l-1-->a=temp.
// n==l b=temp.
// n==r c=temp
// n==r+1 d=temp
// temp=temp->next and length++ 
//  ye loop chalega temp=null
// b se c tk reverse kr de list ko 
// 10 20(a) 30(b) 40 50(c) 60(d) 70 80 90(null)
//  a->next=Null, c->next=null;
// 10 20             30 40 50                 60 70 80 
// c=reverse(b);       
// 10->20(a)      50(c) 40 30(b)                     60(d) 70 80                                                                                                        
//a->next=c, b->next=d return head 
// ListNode* reverseBetween(ListNode* head, int left, int right) {
//          if(left==right)return head;
//          ListNode* b=NULL;
//          ListNode* c=NULL;
//          ListNode* d=NULL;
//          ListNode* e=NULL;
//          ListNode* temp=head;
//          int n=1;
//          while(temp){
//             if(n==left-1)a=temp;
//             if(n==left)b=temp;
//             if(n==right)c=temp;
//             if(n==right-1)a=temp;
//             temp=temp->next;
//             n++;

//          }
//          if(a)a->next=NULL;
//          c->next=NULL;
//          c=reverseList(b);
//          if(a)a->next=c;
//          b->next=d;
//          if(a)return head;
//          return c;

//     }