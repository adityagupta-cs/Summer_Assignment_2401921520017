class Solution {
     ListNode* revr(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
     }
public:
    ListNode* reverseList(ListNode* head) {
        return revr(head);
    }
};