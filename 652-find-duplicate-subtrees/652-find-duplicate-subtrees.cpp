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
    unordered_map<string,pair<int,bool>> subtrees;
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        
        
        if(root == nullptr)
            return result;

        dfs(root);
        
      
        return result;
       
        
    }
    
    string dfs(TreeNode* root){
        
        if(root == nullptr)
            return "n";
        
        string left = dfs(root->left);
        string right = dfs(root->right);
        
        string str = to_string(root->val)+','+ left+',' + right;
        //cout<<str<<endl;
        
        if(subtrees.find(str) == subtrees.end()){
            
            subtrees[str].first = 1;
            subtrees[str].second = false;
        }
        else{
            
            subtrees[str].first++;
        }
        
        if(subtrees[str].first > 1 && subtrees[str].second == false){
            //cout<<"pushing"<<endl;
            //cout<<root->val<<endl;
            result.push_back(root);
            subtrees[str].second = true;
        }
        
        
        return str;
        
    }
};