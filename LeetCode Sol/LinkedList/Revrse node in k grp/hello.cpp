// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         int count=0;
//         ListNode*temp=head;
//         while(count<k){
//             if(temp==NULL) return head;
//             temp=temp->next;
//             count++;
//         }
//         ListNode*prevNode=reverseKGroup(temp,k);
//         temp=head;
//         count=0;
//         ListNode*next=temp->next;
//         while(count<k){
//             next=temp->next;
//             temp->next=prevNode;
//             prevNode=temp;
//             temp=next;
//             count++;
//         }
//         return prevNode;
//     }
// };