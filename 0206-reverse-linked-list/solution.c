/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* current=head;
    struct ListNode* next=NULL;
    struct ListNode* prev=NULL;
    if(current==NULL)return NULL;
    while(current!=NULL){
        next=current->next; /*storing the value of next node*/
        current->next=prev;/*reversing the nodes*/
        prev=current;/*moving prev pointer fordward*/
        current=next;/*moving current pointer fordward*/
    }
    return prev;
}
