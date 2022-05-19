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
    vector<TreeNode*> splitBST(TreeNode* root, int target) {
        
        vector<TreeNode*> result{nullptr, nullptr};
        
        if(!root)
            return result;
        
        /*TreeNode* t = findVal(root,target);
        
        if(t!= nullptr){
            
        }*/
        
        
        if(root->val <= target){
            
            //can ignore right, and focus on left
            result = splitBST( root->right, target);
            root->right = result[0];
            result[0] = root;
            
            
        }
        else{
            
             result = splitBST( root->left, target);
            root->left = result[1];
            result[1] = root;
            
        }
        
        return result;
        
    }
    
    
};