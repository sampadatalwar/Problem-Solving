class Solution {
public:
    
   
    vector<string> result;
    
    vector<string> letterCombinations(string digits) {
        
        map<char,string> combinations;
        combinations.insert({'2',"abc"});
        combinations.insert({'3',"def"});
        combinations.insert({'4',"ghi"});
        combinations.insert({'5',"jkl"});
        combinations.insert({'6',"mno"});
        combinations.insert({'7',"pqrs"});
        combinations.insert({'8',"tuv"});
        combinations.insert({'9',"wxyz"});
    
        
        if (digits.size() == 0)
            return result;
        
        
        string phoneDigits = digits;
        backtrack(0,"",phoneDigits,combinations);
        
        return result;
    }
    
    void backtrack(int index, string path, string phoneDigits, map<char,string> combinations){
        
        if(path.size() == phoneDigits.size() ){
            
            result.push_back(path);
            return;
        }
        
        string letters = combinations[phoneDigits[index]];
        
        for(int i=0; i<letters.size(); i++){
            string s;
            s.push_back(letters[i]);
            path.append(s);
            
            backtrack(index+1, path,phoneDigits,combinations);
            
            //int n = path.size()
            auto it = path.end()-1;
            //it--;
            path.erase(it);
        }
    }
};