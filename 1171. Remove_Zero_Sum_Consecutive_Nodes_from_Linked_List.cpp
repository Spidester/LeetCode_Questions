/*1171. Remove Zero Sum Consecutive Nodes from Linked List

Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences
After doing so, return the head of the final linked list.  You may return any such answer.

Example:
Input: head = [1,2,-3,3,1]
Output: [3,1]
Note: The answer [1,2,1] would also be accepted.*/

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp=head;
        int sum=0;
        while(temp!=NULL){
            sum+=temp->val;
            if(sum==0){
                head=temp->next;
                return removeZeroSumSublists(head);
            }
            temp=temp->next;
        }
        if(head!=NULL){
            head->next=removeZeroSumSublists(head->next);
        }
        return head;
    }
};
