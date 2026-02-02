class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;

        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

        // Case: removing the head
        if (n == len) {
            return head->next;
        }

        // Find node just before the one to delete
        int steps = len - n - 1;
        temp = head;

        for (int i = 0; i < steps; i++) {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        return head;
    }
};
