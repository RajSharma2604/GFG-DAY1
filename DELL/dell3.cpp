Node *reverse(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    Node *Next=NULL;
    while(curr){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}