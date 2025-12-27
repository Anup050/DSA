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
    void traversal(TreeNode* root, int &count, int maxV){
        if(!root) return;
        if(root->val >= maxV){
            count++;
            maxV = root->val;
        }
        traversal(root->left, count, maxV);
        traversal(root->right, count, maxV);
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        int maxV = INT_MIN;
        traversal(root, count, maxV);
        return count;
    }
};