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
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = NULL;

        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        ListNode* newHead = NULL;
        ListNode* tail = NULL;

        while (left != NULL && right != NULL) {
            ListNode* node;

            if (left->val <= right->val) {
                node = left;
                left = left->next;
            } else {
                node = right;
                right = right->next;
            }

            if (newHead == NULL) {
                newHead = node;
                tail = node;
            } else {
                tail->next = node;
                tail = tail->next;
            }
        }

        if (left != NULL)
            tail->next = left;
        else
            tail->next = right;

        return newHead;
    }
};