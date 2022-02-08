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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> result;
        list<TreeNode*> lst;
        TreeNode* temp;
        
        if(!root)
            return result;
        lst.push_back(root);
        
        while(!lst.empty()){
            
            int n = lst.size();
            
            while(n>0){
                
                temp = lst.front();
                lst.pop_front();
                
                if(n==1)
                    result.push_back(temp->val);
                
                if(temp->left)
                    lst.push_back(temp->left);
                if(temp->right)
                    lst.push_back(temp->right);
                
                n--;
            }
        }
        
        /*
        while(root){
            
           result.push_back(root->val);
            
           if(root->right)
               root = root->right; 
            
            else
                root = root->left;
        
        }*/
        
        
       return result; 
    }
};