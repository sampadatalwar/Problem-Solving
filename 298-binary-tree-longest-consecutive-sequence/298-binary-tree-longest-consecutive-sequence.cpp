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
    
    int res = 0;
    int longestConsecutive(TreeNode* root) {
        
        helper(root, nullptr, 0);
        return res;
        
    }
    
    void helper(TreeNode* root, TreeNode* parent, int length){
        
        if(root == nullptr)
            return;
        
        if(parent!=nullptr && root->val == (parent->val)+1)
            length+=1;
        else
            length = 1;
        
        res = max(res,length);
        
        helper(root->left, root, length);
        helper(root->right, root, length);
    }
};