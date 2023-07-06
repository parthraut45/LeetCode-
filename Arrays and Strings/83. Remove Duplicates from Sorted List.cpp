class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        while (cur && cur->next) {
            ListNode* next_node = cur->next;
            if (cur->val == next_node->val)
                cur->next = next_node->next;
            else
                cur = next_node;
        }
        return head;
    }
};
