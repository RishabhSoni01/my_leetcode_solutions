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
    void inorder(TreeNode* &node,TreeNode* &s){
        if(node->val > s->val){
            if(!node->left){
                node->left = s;
                return;
            }
            else{
                inorder(node->left,s);
            }
        }
        else{
            if(!node->right){
                node->right = s;
                return;
            }
            else{
                inorder(node->right,s);
            }
        }
        return;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        TreeNode* root=new TreeNode(preorder[0]);
        TreeNode*temp = root;
        for(int i=1;i<n;i++){
            TreeNode* s=new TreeNode(preorder[i]);
            inorder(temp,s);
        }
        return root;
    }
};