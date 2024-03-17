/*19. Remove Nth Node From End of List

Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count=1;
        if(temp->next == NULL){
            return nullptr;
        }
        while(temp->next != NULL){
            temp = temp->next;
            count++;
        }
        temp = head;
        for(int i=0; i<(count-n-1); i++){
            temp = temp->next;
        }
        if(n==count){
            head = temp->next;
        }
        else{
            ListNode* node = temp->next;
            temp->next = temp->next->next;
            delete node;
        }
        return head;
    }
};
