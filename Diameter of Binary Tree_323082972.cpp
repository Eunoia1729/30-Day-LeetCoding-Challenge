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
    int ans = 0;
    int dfs(TreeNode* cur)
    {
        if( cur == NULL)
            return 0;
        int ldist, rdist;
        ldist = dfs(cur->left);
        rdist = dfs(cur->right);
        ans = max(ldist + rdist, ans);
        return 1 + max(ldist, rdist);
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
