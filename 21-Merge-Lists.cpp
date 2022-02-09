/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. 
The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
   if(list1 != nullptr && list2!= nullptr)
   {       
    ListNode* cmp{};
    if(list1->val <= list2->val)
     {
      cmp = list1;
      cmp->next = mergeTwoLists(list1->next,list2);
     } else
      {
       cmp  = list2;
       cmp->next = mergeTwoLists (list1,list2->next);
      }
    return cmp;
    }
return list1 == nullptr ? list2 : list1;
}