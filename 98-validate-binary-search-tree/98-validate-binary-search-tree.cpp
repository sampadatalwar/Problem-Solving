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
    bool isValidBST(TreeNode* root) {
        long min = INT_MIN, max = INT_MAX;
        return helper(root, LONG_MIN, LONG_MAX);
        
    }
    
    bool helper(TreeNode* root, long min, long max){
        
        if(!root)
            return true;
        
        if(root->val < min || root->val > max)
            return false;
        
        long min1 = long(root->val)+1;
        long max1 = long(root->val)-1;
            
        return helper(root->left, min, max1) && helper(root->right, min1, max);
        
        //return true;
    }
};