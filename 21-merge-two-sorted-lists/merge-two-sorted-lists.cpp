class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // ListNode* tempA = a;
        // ListNode* tempB = b;
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        // while(tempA != NULL && tempB != NULL){
        //     if(tempA->val <= tempB->val){
        //         ListNode* t = new ListNode(tempA->val);
        //         tempC->next = t;
        //         tempC = t;
        //         tempA = tempA->next;
        //     }
        //     else{
        //         ListNode* t = new ListNode(tempB->val);
        //         tempC->next = t;
        //         tempC = t;
        //         tempB = tempB->next;
        //     }
        // }
        // if(tempA == NULL){
        //     tempC->next = tempB;
        // }
        // else{
        //     tempC->next = tempA;
        // }
        // return c->next;

         while(a != NULL && b != NULL){
            if(a->val <= b->val){
                tempC->next = a;
                a = a->next;
                tempC = tempC->next;
            }
            else{
                tempC->next = b;
                b = b->next;
                tempC = tempC->next;
            }
                
        }
        if(a == NULL){
            tempC->next = b;
        }
        else{
            tempC->next = a;
        }
        return c->next;
    }
};