class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (root != NULL) {
            if ((root->val >= q->val) && (root->val <= p->val))
                return root;
            if ((root->val <= q->val) && (root->val >= p->val))
                return root;
            if (root->val < q->val)
                root = root->right;
            else root = root->left;
        }

        return root;
    }

};