class Solution {
public:
    string reformat(string s) {
        
        int alpha =0, nums=0;
        string alphabet = "", numbers="";
        for(int i=0; i<s.size(); i++){
            
            if(s[i]>='a' && s[i]<='z'){
                alpha++;
                alphabet+=s[i];
            }
                
            
            if(s[i]>='0'&& s[i]<='9'){
                nums++;
                numbers+=s[i];
            }
                
            
        }
        
        cout<<"alpha "<<alpha<<" numbers "<<nums<<endl;
        
        if((alpha == 0 && nums == 0) || abs(alpha-nums) >1 )
            return "";
            
        //merge
        //int j=0;    
        
        for(int i=0; i<s.size()-1; i++){
            
            if((s[i]>='a' && s[i]<='z' && s[i+1]>='a' && s[i+1]<='z' ) || (s[i]>='0' && s[i]<='9' && s[i+1]>='0' && s[i+1]<='9' )) {
                
                //reformat
                
                s = reformat(s, alphabet, numbers);
                
                
            }
            
        }
        return s;
        
    }
    
    string reformat(string s, string alphabets, string numbers){
        
        string result = "";
        
        int i = 0;
        
        if(alphabets.size() > numbers.size()){
            
            while(i<alphabets.size() || i<numbers.size()){
            
                if(i<alphabets.size())
                result+=alphabets[i];
                
                if(i<numbers.size())
                    result+=numbers[i];

  
                i++;
        }
            
    }else{
            while(i<alphabets.size() || i<numbers.size()){
            
            if(i<numbers.size())
                result+=numbers[i];
            
            if(i<alphabets.size())
                result+=alphabets[i];
            
            
            
            i++;
        }
    }
        
        
        
        return result;
    }
};