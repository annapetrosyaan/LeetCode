/* Given head, the head of a linked list,
 determine if the linked list has a cycle in it.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 bool hasCycle(ListNode *head)
{
   ListNode* first;
   ListNode* second;
   first=second=head;
   while(second != nullptr && second->next != nullptr)
   {
     first = first->next;
     second = second->next->next;
      if(first == second) 
      {
        return true;
      }
    }
return false;
}

