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


TreeNode* travin(vector<int>&nums ,int st,int end){
    if(st>end) return NULL;
    int mid = st+(end-st)/2;
    TreeNode* newnode = new TreeNode(nums[mid]);

    newnode->left = travin(nums,st,mid-1);
    newnode->right = travin(nums,mid+1,end);

    return newnode;
}
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return travin(nums,0,nums.size()-1);
    }
};