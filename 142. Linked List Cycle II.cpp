class Solution {
public:
    ListNode* detectCycle(ListNode* head) {

        map<ListNode*, int> mp;

        while (head) {
            mp[head]++;
            if (mp[head] > 1)
                return head;
            head = head->next;
        }
        return NULL;
    }
};