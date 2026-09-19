class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if (head->next == NULL)
            return NULL;

        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            temp = temp->next;
            count++;
        }

        int mid = count / 2;

        temp = head;

        
        while (mid > 1) {
            temp = temp->next;
            mid--;
        }

        
        temp->next = temp->next->next;

        return head;
    }
};