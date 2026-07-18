// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* curr = head;

//         for(int i=0;i<k;i++){
//             if(curr == NULL){
//                 return head;
//             }
//             curr = curr->next;
//         }

//         int count  = 0;
//         curr = head;
//         ListNode* prev = NULL;
//         while(count < k) {
//             ListNode* next = curr->next;
//             curr->next = prev;

//             prev = curr;
//             curr = next;
//             count++;
//         }
//         head->next = reverseKGroup(curr,k);

//         return prev;
//     }
// };