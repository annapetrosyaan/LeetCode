/*Given the head of a linked list,
 rotate the list to the right by k places. */

 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 ListNode* rotateRight (ListNode* head, int k) 
{
  if(head == nullptr ) { return head; }
  ListNode* current=head;
  ListNode* tail=head;
  int size{1};
   while(tail->next != nullptr)
   {
    tail=tail->next;
     ++size;
   }
   k = k % size;
  if(k==0) { return head; }
     
   for(int i=0;i<n-k-1;i++)
  {
    current = current ->next;
  }
   tail->next = head;
   head = current->next;
   current->next = nullptr;
 return head;
}   