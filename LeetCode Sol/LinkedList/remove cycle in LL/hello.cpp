
//not an LC problem 

// remove cycle from LL , return nullptr if cycle not found , return the head of LL after deleting the cycle

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode*slow=head;
//         ListNode*fast=head;
//         bool found=false;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 found=true;
//                 break;
//             }
//         }
//         if(found==false){
//             return nullptr;
//         }
//         slow=head;
//         ListNode*prev=NULL;             // create a prev pointer to store the prev value of fast
//         while(slow!=fast){
//             slow=slow->next;
//             prev=fast;
//             fast=fast->next;
//         }
//         prev->next=NULL;               // remove the connection
//         return head;                   // returning the head means kind of returning the LL after we performed an operation(like we do in an arrray)
//     }
// };



