/* 
Given the head of a linked list and an integer val,
 remove all the nodes of the linked list that has Node.val == val,
  and return the new head. */

  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //4
ListNode* removeElements(ListNode* head, int val)
{
    if(head == nullptr ) {return head;}
    if(head == nullptr && head->val == val)
    {
      head = head->next;
    }
    ListNode* current = head;
    ListNode* prev{};
       while(current != nullptr)
        {
          if(current->val == val)
          {
             prev->next = current->next;
            current = current->next;
          } else
            {
              prev = current;
              current = current->next;
            }
        }
return head; 
}