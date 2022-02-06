class Solution {
public:
    bool isValid(string s) {
        
        list<char> brackets;
        char c;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                
                brackets.push_front(s[i]);
                continue;
                
            }
            else{
                
                if(brackets.empty())
                        return false;
                
                if(s[i] == ')'){
                    
                    c = brackets.front();
                    brackets.pop_front();
                    
                    
                    if(c == '[' || c == '{')
                        return false;
            
                    continue;
                    
                }
                
                else if(s[i] == '}'){
                    
                    c = brackets.front();
                    brackets.pop_front();
                    
                    
                    if(c == '[' || c == '(')
                        return false;
                    
                    continue;
                }
                
                else if(s[i] == ']'){
                    
                    c = brackets.front();
                    brackets.pop_front();
                    
                    
                    if(c == '(' || c == '{')
                        return false;
                    
                    continue;
                }
            }
            
            
        }
        
        return brackets.empty();
        
    }
};