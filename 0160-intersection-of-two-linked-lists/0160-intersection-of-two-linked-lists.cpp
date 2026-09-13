/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> seen;

        ListNode* A = headA;
        ListNode* B = headB;

        while (A != NULL) {
            seen.insert(A);
            A = A->next;
        }

        while (B != NULL) {
            if (seen.count(B)) {
                return B;
            }
            B = B->next;
        }

        return NULL;
    }
};