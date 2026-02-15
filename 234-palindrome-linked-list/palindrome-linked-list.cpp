class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        // ListNode* temp = head;
        // ListNode* farzi = new ListNode(0);
        // ListNode* tc = farzi;
        // while(temp!=NULL){
        //         tc->next = new ListNode(temp->val);
        //         temp = temp->next;
        //         tc = tc->next;
        // }
        // farzi = farzi->next;
        // ListNode* newHead = reverse(farzi);
        // temp = head;
        // tc = newHead;
        // while(temp!=NULL && tc!=NULL){
        //     if(temp->val != tc->val){
        //         return false;   // mismatch → immediately false
        //     }
        //     temp = temp->next;
        //     tc = tc->next;
        // }
        // return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverse(slow->next);
        ListNode* a = head;
        ListNode* b = newHead;
        while(b){
            if(a->val != b->val){
                return false;
            }
            a = a->next;
            b = b->next;
        }
        return true;

    }
};