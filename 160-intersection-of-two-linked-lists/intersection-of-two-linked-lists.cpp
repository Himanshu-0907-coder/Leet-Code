class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        ListNode* tempA = headA;
        while(tempA!=NULL){
            lenA++;
            tempA = tempA->next;
        }

        int lenB = 0;
        ListNode* tempB = headB;
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }

        
        tempA = headA;
        tempB = headB;

        if(lenA>lenB){
            int diff = lenA - lenB;
            while(diff-- && tempA != NULL){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
            int diff = lenB - lenA;
            while(diff-- && tempA != NULL){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }

    }
};