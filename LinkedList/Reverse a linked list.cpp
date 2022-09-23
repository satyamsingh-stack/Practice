// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        Node *dummy=NULL;
        while(head!=NULL){
            Node *next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
        }
        return dummy;
    }
    
};
