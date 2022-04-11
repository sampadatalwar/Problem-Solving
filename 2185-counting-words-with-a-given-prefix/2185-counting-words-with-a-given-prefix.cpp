class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count = 0;
        int s = pref.length();
        //iterate through the vector
        
        for(int i=0; i<words.size(); i++){
            
            //check size of prefix, and match with 
            if(words[i].substr(0,s) == pref){
                 count++;
            }
        }
        
        return count;
        
    }
};