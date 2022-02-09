
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 ListNode* InsertionSort(ListNode* head)
 {
     ListNode* sorted{};
     while(head != nullptr)
     {
         ListNode* temp = head;
         head = head->next;
    //empty or head value is bigger than new
     if(sorted == nullptr || sorted->val >= temp->val)
     {
         temp->next = sorted;
         sorted = temp;
     } else 
       {
           ListNode* curr = sorted;
        //finding suitable position
        while( curr != nullptr && curr->next->val <= temp->val )
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
       }
     }
 return sorted;
 }