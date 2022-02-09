/* Given the head of a singly linked list,
 reverse the list, and return the reversed list.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* reverseList(ListNode* head) 
{
ListNode* temp = head;
ListNode* current;
ListNode* prev = nullptr;
while(temp != nullptr)
  {
    current = temp->next;
    temp->next = prev;
    prev = temp;
    temp = current;
 }
 return prev;
}