Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
//Function to count number of subtrees having sum equal to given sum.
int sum(Node *root, int x, int &val){
    if(root==nullptr)
        return 0;
    int s=sum(root->left,x,val)+sum(root->right,x,val)+root->data;
    if(s==x)
        val++;
    return s;
}
int countSubtreesWithSumX(Node* root, int x)
{
	// Code here
	int val=0;
	sum(root,x,val);
	return val;
}
