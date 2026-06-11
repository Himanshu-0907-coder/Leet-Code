class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        int mididx = len/2;
        ListNode* newList = head;
        for(int i=1;i<mididx;i++){
            newList = newList->next;
        } 
        if(len == 1) return head;
        return newList->next;
    }
};