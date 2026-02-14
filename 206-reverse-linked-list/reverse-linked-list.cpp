class Solution {
public:
    // ListNode* getNode(ListNode* head,int idx){
    //     ListNode* temp = head;
    //     for(int i=1;i<=idx;i++){
    //         temp=temp->next;
    //     }
    //     return temp;
    // }
    ListNode* reverseList(ListNode* head) {
        // int n = 0;
        // ListNode* temp = head;
        // while(temp){
            
        //     temp = temp->next;
        //     n++;
        // }
        // int i = 0;
        // int j = n-1;
        // while(i<j){
        //     ListNode* left = getNode(head,i);
        //     ListNode* right = getNode(head,j);
        //     int t = left->val;
        //     left->val = right->val;
        //     right->val = t;
        //     i++;
        //     j--;
        // }
        // return head;

        //Iterative Method->
        // ListNode* prev = NULL;
        // ListNode* curr = head;
        // ListNode* Next = NULL;
        // while(curr){
        //     Next = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = Next;
        // }
        // return prev;

        // recursive Method->
        //base case 
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};