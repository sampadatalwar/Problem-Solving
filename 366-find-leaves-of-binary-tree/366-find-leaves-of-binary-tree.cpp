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
    vector<vector<int>> soln;
    
    vector<vector<int>> findLeaves(TreeNode* root) {
        
        
        getHeight(root);
        
        return soln;
        
        
    }
    
    int getHeight(TreeNode* root){
        
        if(root == nullptr)
            return -1;
        
        int leftHeight = 1+ getHeight(root->left);
        int rightHeight = 1+getHeight(root->right);
        
        //cout<<root->val<<endl;
        //cout<<leftHeight<<" "<<rightHeight<<endl;
        int current = max(leftHeight,rightHeight);
        
        if(soln.size() == current){
            soln.push_back({});
        }

        soln[current].push_back(root->val);
        
        return current;
    }
};