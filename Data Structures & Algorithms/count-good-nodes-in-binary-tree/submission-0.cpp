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
int check(TreeNode* root,int  temp){
    int cnt=0;
    if(root==nullptr) return 0;
    if(root->val>= temp) {temp=root->val; cnt++;}
    
    cnt+=check(root->left,temp)+check(root->right,temp);
    return cnt;
}
    int goodNodes(TreeNode* root) {
        int ans=0;
        if(!root) return 0;
        int temp=root->val;
        
        ans=check(root,temp);
        return ans;
    }
};
