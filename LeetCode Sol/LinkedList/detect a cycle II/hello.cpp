// detect a cycle , if present return the node pointer for the meeting node , if not present return NULL/nullptr


//optimal 

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
//         while(slow!=fast){
//             slow=slow->next;
//             fast=fast->next;
//         }
//         return slow;
//     }
// };
