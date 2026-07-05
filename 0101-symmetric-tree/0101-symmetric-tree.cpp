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
bool check(TreeNode* le,TreeNode* ri){
    if(le==NULL&&ri==NULL) return true;
    if(le==NULL||ri==NULL) return false;
    if(le->val!=ri->val) return false;
    return check(le->left,ri->right)&&check(le->right,ri->left);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};