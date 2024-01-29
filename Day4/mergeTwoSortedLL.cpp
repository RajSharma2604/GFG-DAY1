  void insertattail(ListNode *&tail ,ListNode *head){
        tail->next=head;
        tail=head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dhead=new ListNode(-1);
        ListNode *dtail=dhead;
        ListNode *ptr1=list1 ,*ptr2=list2;
        while(ptr1 && ptr2){
            if(ptr1->val <=ptr2->val){
                insertattail(dtail,ptr1);
                ptr1=ptr1->next;
            }
            else{
                insertattail(dtail,ptr2);
                ptr2=ptr2->next;
            }
        }
        while(ptr1){
            insertattail(dtail,ptr1);
            ptr1=ptr1->next;
        }
         while(ptr2){
            insertattail(dtail,ptr2);
            ptr2=ptr2->next;
        }
        return dhead;
    }