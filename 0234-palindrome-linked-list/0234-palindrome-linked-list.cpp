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
    bool isPalindrome(ListNode* head) {
        int n =0;
        ListNode *temp = head;
        stack<int> seen;
        while(temp != NULL){
            n++;
            seen.push(temp->val);
            temp=temp->next;
        }

        int mid  = n/2;
        ListNode *curr = head;
        while (mid>=0){
            mid--;
            int see = seen.top();
            seen.pop();
            if (see!=curr->val){
                return false;
            }
            curr=curr->next;
        }

        return true;
    }
};