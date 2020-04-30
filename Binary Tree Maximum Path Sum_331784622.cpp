/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = INT_MIN;
    int dfs(TreeNode* cur)
    {
       int l, r;
       if( cur == NULL)
           return 0;
        l = dfs(cur->left);
        r = dfs(cur->right);
        int tmp = cur->val;
        if( l > 0)
            tmp += l;
        if( r > 0)
            tmp += r;
        ans = max(ans, tmp);
        return max(0, cur->val + max(0,max(l,r)));
    }
    int maxPathSum(TreeNode* root) {
        // ans = 0;
        dfs(root);
        return ans;
    }
};
