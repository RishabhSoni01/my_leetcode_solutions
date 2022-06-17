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
    #define havecamera 2
    #define camera 1
    #define no_camera 0
    int ans=0;
    int dfs(TreeNode* root){
        if(root==NULL){
            return camera;
        }
        int l=dfs(root->left);
        int r=dfs(root->right);
        if(l==no_camera || r==no_camera){
            ans++;
            return havecamera;
        }
        else if(l==havecamera || r==havecamera){
            return camera;
        }
        else{
            return no_camera;
        }
    }
    int minCameraCover(TreeNode* root) {
        if(dfs(root)==no_camera)ans++;
        return ans;
    }
};