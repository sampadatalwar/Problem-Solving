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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        
        if(root == nullptr)
            return result;
        
        bool left = false;
        
        queue<TreeNode*> curr;
        vector<int> temp;
        
        curr.push(root);
        
        while(!curr.empty()){
            
            
            int len = curr.size();
            
            for(int i=0; i<len; i++){
                
                TreeNode* c = curr.front();
                curr.pop();
                
                if(c != nullptr){
                    
                    if(left)
                        temp.insert(temp.begin(),c->val);
                        
                    else
                        temp.push_back(c->val);   
                }
                
                if(c->left){
                         curr.push(c->left);
                     }
                        
                    
                    if(c->right){
                        curr.push(c->right);
                        
                    }
                
                /*if(left){
                    cout<<"In right"<<endl;
                    
                    if(c->right){
                        
                      curr.push(c->right);
                        cout<<"Push "<<c->right->val;
                        
                    }
                    
                    
                    if(c->left){
                        
                        curr.push(c->left);
                        cout<<"Push "<<c->left->val;
                        
                    }
                        

                    
                    //left=false;
                    
                    
                }else{
                    cout<<"In left"<<endl;
                     if(c->left){
                         curr.push(c->left);
                     }
                        
                    
                    if(c->right){
                        curr.push(c->right);
                        
                    }

                    //left=true;
                }*/
                
            }
            
            left = !left;
            result.push_back(temp);
            temp.clear();
            
        }
        return result;
        
    }
};