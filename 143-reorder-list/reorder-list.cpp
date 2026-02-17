
class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* a = head;
        ListNode* b = reverse(slow->next);
        slow->next = NULL;

        ListNode* ta = a;
        ListNode* tb = b;
        ListNode* newLsit = new ListNode(0);
        ListNode* tc = newLsit;
        while(ta && tb){
            // connecting a
            tc->next = ta;
            ta = ta->next;
            tc = tc->next;

            // connecting b
            tc->next = tb;
            tb = tb->next;
            tc = tc->next;
        }
        tc->next = ta;
        newLsit = newLsit->next;

    }
};