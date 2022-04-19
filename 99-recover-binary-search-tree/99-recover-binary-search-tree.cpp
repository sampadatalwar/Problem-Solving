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
    
    TreeNode* x = nullptr, *y = nullptr, *pred = nullptr;
    
    void swap(TreeNode* &a, TreeNode* &b) {
    int temp = a->val;
    a->val = b->val;
    b->val = temp;
  }
    
    void recoverTree(TreeNode* root) {
        
        
       dfs(root);     
       swap(x,y); 
    }
    
    
    
   void dfs(TreeNode* &root){
       
       if(!root)
           return;
       
        dfs(root->left);
       
       if(pred!=nullptr && root->val < pred->val){
           
           y = root;
           
           if(x == nullptr)
               x = pred;
           else
               return;
       }
       pred = root;
        dfs(root->right);
           
    }
};