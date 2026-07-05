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

void intrav(TreeNode* root,vector<int>& travout){
    if(root==NULL)return;
    intrav(root->left,travout);
    travout.push_back(root->val);
    intrav(root->right,travout);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> travout;
        intrav(root,travout);
        return travout;
    }
};