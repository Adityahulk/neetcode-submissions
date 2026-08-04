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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == nullptr){
            return root;
        }

        TreeNode* currleft = root->left;
        TreeNode* currright = root->right;

        if(currleft == nullptr && currright == nullptr){
            return root;
        }

        root->right = invertTree(currleft);
        root->left = invertTree(currright);

        return root;
    }
};
