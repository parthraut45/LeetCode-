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
    int getDecimalValue(ListNode* head) {
        int decimalValue = 0;
        ListNode* current = head;
        while (current != nullptr) {
            decimalValue = decimalValue * 2 + current->val;
            current = current->next;
        }
        return decimalValue;
    }
};
