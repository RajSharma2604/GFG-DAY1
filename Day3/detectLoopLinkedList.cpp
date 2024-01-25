bool detectLoop(Node* head)
    {
        // your code here
        //edge case
        if(head==NULL ||head->next==NULL)return false;
        if(head==head->next)return true;
        if(head->next->next==head)return true;
        Node *slow=head;
        Node *fast=head;
        while(fast && fast->next)
        {
           
            slow=slow->next;
            fast=fast->next->next;
             if(slow==fast)return true;
        }
        return false;
    }
