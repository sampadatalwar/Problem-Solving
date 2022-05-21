class Solution {
public:
    string reorderSpaces(string text) {
        
        int spaces = 0;
        string result = "";
        
        for(int i=0; i<text.size(); i++){
            
            if(text[i]== ' ')
                spaces++;
            
        }
        if(spaces == 0)
            return text;
        
        vector<string> words = split(text);
        
        //printing words for checking
        for(int i=0; i<words.size(); i++){
            cout<<words[i];
        }
        cout<<endl;
        
        if(words.size()==1){
            
            result.append(words[0]);
            
            for(int i=0; i<spaces; i++){
                result.append(" ");
                
            }
            
            return result;
        }
            
        int eachSpace = spaces/(words.size()-1);
        
        cout<<"spaces "<<spaces<<" each space "<<eachSpace<<endl;
        
        
        
        for(int i=0; i<words.size()-1; i++){
            
            result.append(words[i]);
            cout<<words[i]<<endl;
            for(int j=0; j<eachSpace; j++){
                cout<<" space added"<<endl;
                result.append(" ");
                spaces--;
            }
            
            
            //result.push_back(words[i]);
            //result.push_back(" ");
            
            
        }
        
        result.append(words[words.size()-1]);
        
        if(spaces > 0){
            
            for(int i=0; i<spaces; i++){
                result.append(" ");
                
            }
            
        }
        
        return result;
        
    }
    
    vector<string> split(string text){
        
        
        string temp = "";
        vector<string> res;
        
        
        for(int i=0; i<text.size(); i++){
            //cout<<text[i]<<endl;
            
            if(text[i] == ' '){
                
                if(temp!=""){
                    
                    res.push_back(temp);
                    temp="";
                    
                }

            }

            else{
                temp= temp + text[i];
            }
            
            
                
        }
        
        if(temp != "")
            res.push_back(temp);
            
        return res;
    }
};