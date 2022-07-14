class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int c = 0;
        //here we count the number of nodes
        while (temp) {
            c++;
            temp = temp->next;
        }
        // we get the middle node
        c = (c / 2) + 1;
        // we reset temp to the head
        temp = head;
        for (int i = 1; i < c; i++) {
            temp = temp->next;
        }
        return temp;
    }
};