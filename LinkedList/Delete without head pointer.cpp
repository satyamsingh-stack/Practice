// Expected Time Complexity : O(1)
// Expected Auxilliary Space : O(1)

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       Node *temp=del->next;
       del->data=temp->data;
       del->next=temp->next;
    }

};
