class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        Node *curr=head, *t;
        int count;
        while(curr != nullptr){
            for(count=1;count<M && curr!=nullptr; count++)
                curr=curr->next;
            if(curr==nullptr)
                return;
            t=curr->next;
            for(count=1;count<=N && t!=nullptr; count++){
                Node *temp=t;
                t=t->next;
                delete(temp);
            }
            curr->next=t;
            curr=t;
        }
    }
};
