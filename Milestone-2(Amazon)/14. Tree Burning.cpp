class Solution {
  public:
    int minTime(Node* root, int tgt) 
    {
        // Your code goes here
    unordered_map <Node*, Node*> parent;
    unordered_map <Node*, bool> visited;
    queue <Node*> q;
    q.push(root);
    Node *final;
    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node *tmp = q.front();
            q.pop();
            if(tmp->data == tgt)
                final = tmp;
            if(tmp->left){
                q.push(tmp->left);
                parent[tmp->left] = tmp;
            }
            if(tmp->right){
                q.push(tmp->right);
                parent[tmp->right] = tmp;
            }
        }
    }
    int curr_level = 0;
    q.push(final);
    visited[final] = true;
    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node *tmp = q.front();
            q.pop();
            if(tmp->left && !visited[tmp->left]){
                q.push(tmp->left);
                visited[tmp->left] = true;
            }
            if(tmp->right && !visited[tmp->right]){
                q.push(tmp->right);
                visited[tmp->right] = true;
            }
            if(parent[tmp] && !visited[parent[tmp]]){
                q.push(parent[tmp]);
                visited[parent[tmp]] = true;
            }
        }
        curr_level ++;
    }
    return curr_level-1;
    }
};
