class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> alphabets1, alphabets2;
        
        for(int i=0; i<26; i++){
            
            alphabets1.push_back(0);
            alphabets2.push_back(0);
        }
        
        for(int i=0; i<s.size(); i++){
            int x = int(s[i]) - int('a');
            alphabets1[x]++;
        }
        
        for(int i=0; i<t.size(); i++){
            
            alphabets2[int(t[i]) - int('a')]++;
        }
        
        return alphabets1 == alphabets2;
    }
};