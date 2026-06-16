class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* p1=&dummy;
        ListNode* temp=head;
        ListNode* p2=&dummy;
        for(int i=0;i<n;i++){
            p2=p2->next;
        }
        while(p2->next!=nullptr){
            p1=p1->next;
            temp=temp->next;
            p2=p2->next;
        }
        p1->next=temp->next;
        return dummy.next;
    }
};