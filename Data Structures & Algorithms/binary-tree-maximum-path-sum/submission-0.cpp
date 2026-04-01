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
int calc(TreeNode* node,int &mxans){

if(!node) return 0;
int l=max(calc(node->left,mxans),0);
int r=max(calc(node->right,mxans),0);
mxans=max(mxans,l+r+node->val);

return (node->val+max(l,r));    
}
    int maxPathSum(TreeNode* root) {
             if(!root) return 0;
             int mxans=INT_MIN;
             calc(root,mxans);
             return mxans;
    }
};
