class Solution
{
    public:
    void inorder(Node *root, vector<int> &ans){
        if(root==nullptr)
            return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> ans;
        inorder(root,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    int idx=0;
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if((A.size()-1)<idx){
           idx++;
           return nullptr;
       }
       Node *root=new Node(A[idx++]);
       root->left=deSerialize(A);
       root->right=deSerialize(A);
       return root;
    }

};
