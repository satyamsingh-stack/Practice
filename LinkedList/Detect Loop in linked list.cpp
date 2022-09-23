// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head==NULL)
            return false;
        else{
            Node *slow=head;
            Node *fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast)
                    return true;
            }
            return false;
        }
    }
};
