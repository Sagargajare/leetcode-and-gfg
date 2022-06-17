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
    void traversal(TreeNode* root){
        if(root==NULL){
            return;
        }
        swap(root->left,root->right);
        traversal(root->left);
        traversal(root->right);
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        traversal(root);
        return root;
    }
};