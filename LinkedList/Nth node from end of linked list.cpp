// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

int getNthFromLast(Node *head, int n)
{
    if(head==NULL)
        return -1;
    int size=0;
    Node *curr=head;
    while(curr!=NULL){
        size++;
        curr=curr->next;
    }
    if(size<n)
        return -1;
    int ans=0;
    curr=head;
    for(int i=1;i<size-n+1;i++)
        curr=curr->next;
    ans=curr->data;
    return ans;
}
