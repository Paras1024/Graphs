/*
This program checks if the tree is symmetric across the root or not
*/

bool compare(TreeNode* p,TreeNode* q)
    {
        if((p == NULL && q != NULL) || (p != NULL && q == NULL) )
            return false;
        if(p == NULL && q == NULL) return true;
        bool a,b;
        a = compare(p->left,q->right);
        b = compare(p->right,q->left);
        return (a&b) && (p->val == q->val);
        
    }
    bool isSymmetric(TreeNode* root) {
        return compare(root->left,root->right);
    }
