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
    bool dfs(TreeNode* cur, int i, vector<int>& arr)
    {
        if( cur->left == NULL and cur->right == NULL )
            return (i + 1 == arr.size() and cur->val == arr[i]);
        if( i == arr.size() )
            return false;
        if( arr[i] == cur->val)
        {
            if( cur->left != NULL)
            {
                if ( dfs(cur->left, i + 1, arr) )
                    return true;
            }
            if( cur->right != NULL)
            {
                if ( dfs(cur->right, i + 1, arr) )
                    return true;
            }
        }
        return false;
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        // if( root->left != NULL) cout<<"left of root exists\n";
        // if( root->right != NULL) cout<<"right of root exists\n";
        return dfs(root, 0, arr);
    }
};
