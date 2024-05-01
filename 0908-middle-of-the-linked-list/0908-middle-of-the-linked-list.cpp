class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        // Count the number of nodes in the list
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Calculate the index of the middle node
        int k = count / 2 ;
        k = k +1;

        // Reset count and traverse the list again to find the middle node
        count = 0;
        temp = head;
        while (temp != nullptr) {
            count++;
            if (count == k) {
                return temp;
            }
            temp = temp->next;
        }

        // If the list is empty or has only one node, return head
        return head;
    }
};
