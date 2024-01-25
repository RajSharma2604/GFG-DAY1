void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *slow=head, *fast=head;
        int flag=0;//means not having loop
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)return;
        else
        {
            //finding starting node
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            Node *temp=slow;
            //now it become circular linked list
            while(temp)
            {
                slow=slow->next;
                if(slow->next==temp)break;
            }
            slow->next=NULL;
        }
    }