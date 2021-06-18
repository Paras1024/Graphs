 /*
 This code prints all paths from root to leaf nodes. Used Depth first search to implement
 For example-  
  2
 /  \
1    4
 
Output : 2->1,  2->4


 */
 
 vector<string> v;
    void dfs(TreeNode* root,string s)
    {
        if(root == NULL) {
            
            return;
        }
        if(s == "")
            s = to_string(root->val);
        else
            s = s + "->" + to_string(root->val);
        
        if(root->left == NULL && root->right == NULL)
            v.push_back(s);
        dfs(root->left,s);
        dfs(root->right,s);
        
        

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        string s = "";
        
        dfs(root,s);
        return v;
    }
