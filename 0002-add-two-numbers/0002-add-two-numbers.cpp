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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *tem = dummy ;
        int carr= 0;
        while( l1 != nullptr || l2 != nullptr || carr ){
            int sum =0;
            if(l1){
                sum += l1 -> val;
                l1 = l1-> next;
            }
            if(l2){
                sum += l2 -> val;
                l2 = l2-> next;
            }

            sum += carr;
            carr = sum / 10;
            ListNode *Node = new ListNode(sum%10);
            tem -> next = Node;
            tem = tem -> next;
        }
        return dummy -> next;
    }
};