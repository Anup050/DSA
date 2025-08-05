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
    void helper(TreeNode* root, int targetSum, vector<vector<int>> &v, vector<int> ans){
        if(!root) return;
        if(root->val == targetSum && (!root->left && !root->right)){
            ans.push_back(root->val);
            v.push_back(ans);
            return;
        }
        ans.push_back(root->val);
        int f = root->val;
        helper(root->left, targetSum-f, v, ans);
        helper(root->right, targetSum-f, v, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        vector<int> ans;
        helper(root, targetSum, v, ans);
        return v;
    }
};