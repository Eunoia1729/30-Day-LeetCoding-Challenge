/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* insertNode(TreeNode* cur, int val)
    {
        if( cur == NULL)
        {
            return new TreeNode(val);
        }
        if( cur->val < val )
            cur->right = insertNode(cur->right, val);
        else
            cur->left = insertNode(cur->left, val);
        return cur;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        int i;
        for(i = 0; i < preorder.size(); ++i)
        {
            root = insertNode(root, preorder[i]);
        }
        return root;
    }
};
