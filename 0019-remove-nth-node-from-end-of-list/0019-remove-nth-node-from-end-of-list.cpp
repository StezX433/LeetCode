class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        // If deleting the first node
        if (n == count) {
            return head->next;
        }

        temp = head;

        
        int steps = count - n - 1;

        while (steps > 0) {
            temp = temp->next;
            steps--;
        }

        temp->next = temp->next->next;

        return head;
    }
};