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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        int cnt =0;
        ListNode* curr = head;
        ListNode* tem = nullptr;
        ListNode* pre = nullptr;
        while(curr!= nullptr){
            tem = curr->next;
            curr->next = pre;
            pre = curr;
            curr = tem;
        }
        return pre;

    }
};


// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* curr = head;
//         ListNode* pre = nullptr;
//         ListNode* tem = nullptr;

//         while (curr != nullptr) {
//             tem = curr->next;  // Store next node
//             curr->next = pre;  // Reverse current node's pointer
//             pre = curr;        // Move pointers one position ahead
//             curr = tem;
//         }

//         // Update the head pointer to point to the new head of the reversed list
//         head = pre;

//         return head;
//     }
// };