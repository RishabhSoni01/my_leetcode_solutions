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
    int diameterOfBinaryTree(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
private:
    int height(TreeNode* root,int &diameter){
        if(root==NULL){
            return 0;
        }
        int l=height(root->left,diameter);
        int r=height(root->right,diameter);
        diameter= max((l+r),diameter);
        return 1+max(l,r);
    }
};