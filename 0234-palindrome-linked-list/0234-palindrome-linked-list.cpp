class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> seen;
        int count = 0;

        while (temp != NULL) {
            seen.push(temp);
            temp = temp->next;
            count++;
        }

        int mid = count / 2;
        temp = head;

        

        while (temp != NULL) {
            ListNode* item = seen.top();
            seen.pop();

            if (item->val != temp->val) {
                return false;
            }

            temp = temp->next;
        }

        return true;
    }
};