/*876. Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

Example:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        count = count/2;
        temp = head;
        for(int i=0; i<count; i++){
            temp = temp->next;
        }
        return temp;
    }
};
