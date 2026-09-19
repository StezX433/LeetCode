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
    bool hasCycle(ListNode *head) {
        if (head==NULL ||head->next==NULL ){
            return false;
        }
        unordered_set<ListNode*> seen;
        ListNode *temp = head;
        while (temp!=NULL){
            if (seen.count(temp)){
                return true;
            }
            seen.insert(temp);
            temp=temp->next;
        }
        return false;
    }
};