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
     vector<TreeNode*> result;
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
       
        
        if(root == nullptr)
            return result;
        
        
        dfs(root, to_delete, &result);
        if(root != nullptr){
            
              
        if(find(to_delete.begin(), to_delete.end(), root->val) == to_delete.end()){
            
            result.push_back(root);
        }
            
        }
      
        return result;
        
        
        
    }
    
   TreeNode* dfs(TreeNode* &root, vector<int>& to_delete, vector<TreeNode*> *result){
        
        if(root == nullptr)
            return nullptr;
       
        TreeNode* l = dfs(root->left, to_delete, result);
        TreeNode* r = dfs(root->right, to_delete, result);
       
       
       
       if(find(to_delete.begin(), to_delete.end(), root->val) != to_delete.end()){
           cout<<"found "<<root->val<<endl;
           if(l != nullptr)
            result->push_back(l);
           if(r != nullptr)
            result->push_back(r);
           
           root = nullptr;
           delete(root);
           //return nullptr;
        }
        
        return root;
    }
};