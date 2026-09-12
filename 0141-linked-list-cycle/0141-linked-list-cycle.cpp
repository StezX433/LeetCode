class Solution {
public:
    bool hasCycle(ListNode *head) {

        unordered_map<ListNode*, int> mp;

        ListNode* temp = head;

        while (temp != NULL) {

            if (mp.count(temp)) {
                return true;
            }

            mp[temp]++;

            temp = temp->next;
        }

        return false;
    }
};