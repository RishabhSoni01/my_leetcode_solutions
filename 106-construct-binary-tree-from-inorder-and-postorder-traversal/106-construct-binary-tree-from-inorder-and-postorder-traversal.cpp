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
    TreeNode* buildUniqueTree(vector<int>& inorder,int instart,int inend,vector<int>& postorder,int poststart,int postend,unordered_map<int,int> &map){
        if(instart>inend || poststart > postend)return NULL;
        
        TreeNode* root = new TreeNode(postorder[postend]);
        int inroot = map[root->val];
        int numsleft = inroot-instart;
        root->left = buildUniqueTree(inorder,instart,inroot-1,postorder,poststart,poststart-1+numsleft,map);
        root->right = buildUniqueTree(inorder,inroot+1,inend,postorder,poststart+numsleft,postend-1,map);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()){
            return NULL;
        }
        unordered_map<int,int> map;
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        TreeNode* root = buildUniqueTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,map);
        return root;
    }
};