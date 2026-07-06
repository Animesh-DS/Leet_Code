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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<TreeNode*> q;
        int front=0;
        int end=1;
        int limit=1;
        int ctr = 0;
        vector<int> curr;
        vector<vector<int>> final;
        if(root==NULL) return final;
        q.push_back(root);
        while(front!=end){
            if(q[front]->left!=NULL){
                q.push_back(q[front]->left);
                end++;
            }
            if(q[front]->right!=NULL){
                q.push_back(q[front]->right);
                end++;
            }
            curr.push_back(q[front]->val);
            ctr++;
            front++;
            if(ctr==limit){
                limit=end-front;
                final.push_back(curr);
                curr.clear();
                ctr=0;
            }
            
        }
        return final;
    }
};