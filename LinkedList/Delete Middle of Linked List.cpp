// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

Node* deleteMid(Node* head)
{
    if(head==NULL)
        return NULL;
    Node *prev=NULL;
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    prev->next=slow->next;
    return head;
}
