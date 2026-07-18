// Slow and Fast Pointer Approach : 

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         // Slow-Fast Pointer Approach :

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(n--) {
//             fast = fast->next;
//         }

//         // Edge Case : 
//         if(fast == NULL) {
//             return head->next;
//         }

//         ListNode* prev = NULL;

//         while(fast != NULL){
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next;
//         }

//         prev->next = slow->next;
//         delete slow;

//         return head;
//     }
// };



// Counting Approach : 

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* temp = head;
//         int count = 0;

//         while(temp != NULL){
//             count++;
//             temp = temp->next;
//         }

//         if(count == n){
//             return head->next;
//         }

//         temp = head;
//         int pos = count - n - 1;

//         while(pos--){
//             temp = temp->next;
//         }

//         temp->next = temp->next->next;

//         return head;
//     }
// };