class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a = NULL;
        ListNode* b = head;

        while (b != NULL) {
            ListNode* c = b->next;
            b->next = a;
            a = b;
            b = c;
        }

        return a;
    }
};