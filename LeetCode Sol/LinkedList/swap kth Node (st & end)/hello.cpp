//swapp kth node from the start and the kth node from the last

// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode* first = head;
//         ListNode* second = head;
//         ListNode* temp = head;

//         // Move first to the k-th node
//         for (int i = 1; i < k; i++) {
//             first = first->next;
//         }

//         ListNode* kthFromStart = first;

//         // Move first to the end
//         while (first->next != nullptr) {
//             first = first->next;
//             second = second->next;
//         }

//         // second is now the k-th node from the end
//         swap(kthFromStart->val, second->val);

//         return head;
//     }
