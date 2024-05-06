class Solution {
    
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next; // Adjusted here
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* list1, ListNode* list2) {

        ListNode* dummyListNode = new ListNode(-1); // Corrected here
        ListNode* temp = dummyListNode;
        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val < list2->val) {
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            }
            else {
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }
        if (list1) temp->next = list1;
        else temp->next = list2;
        return dummyListNode->next;
    }

    ListNode* sort(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* middle = findMiddle(head);
        ListNode* right = middle->next;
        middle->next = nullptr;
        ListNode* left = head;
        left = sort(left);
        right = sort(right);
        return merge(left, right);
    }
    
public:
    ListNode* sortList(ListNode* head) {
        return sort(head);
    }
};