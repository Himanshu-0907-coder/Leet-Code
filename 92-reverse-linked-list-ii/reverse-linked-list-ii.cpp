class Solution {
public:
    ListNode* recursive(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = recursive(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;   
        ListNode* temp = head;
        //Four pointers
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL ;
        int n = 1 ;
        while(temp != NULL){
            if(n == left-1) a = temp;
            if(n == left) b = temp;
            if(n == right) c = temp;
            if(n == right+1) d = temp;
            temp = temp->next;
            n++;
        }     
        if(a != NULL) a->next = NULL;
        c->next = NULL;
        c = recursive(b);
        if(a != NULL) a->next = c;
        b->next = d;
        if(a!=NULL) return head;
        
        return c;

    }
};