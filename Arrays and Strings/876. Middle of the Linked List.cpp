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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* current = head;
        while(current != NULL){
            length++;
            current = current -> next;
        }
        current = head;
        int middle = (length/2) + 1;
        for(int i = 1; i < middle; i++){
            current = current -> next;
        }
        return current;
    }
};
