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
        int n= 0;
        ListNode *temp = head;
        while (temp != NULL){
            temp = temp->next;
            n++;
        }
        temp=head;
        int mid = n/2;
        while (mid !=0){
            temp=temp->next;
            mid--;
        }

        return temp;
    }
};