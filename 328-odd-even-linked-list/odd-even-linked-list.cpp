class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* tempH = head;
        ListNode* low = new ListNode(0);
        ListNode* high = new ListNode(0);
        ListNode* templ = low;
        ListNode* temph = high;
        int pos = 1;
        while(tempH != NULL){
            if(pos % 2 != 0){
                templ->next = tempH;
                templ = templ->next;
            }
            else{
                temph->next = tempH;
                temph = temph->next;
            }
            tempH = tempH->next;
            pos++;
        }
        templ->next = high->next;
        temph->next = NULL;

        return low->next;
    }
};