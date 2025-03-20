// time : O(n)
// space : O(1)
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->next!=NULL and temp->val == temp->next->val){
                while(temp->next!=NULL and temp->val == temp->next->val) temp = temp->next;
                prev->next = temp->next;
            }
            else prev = prev->next;
            temp = temp->next;
        }
        return dummy->next;
    }
};