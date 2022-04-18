class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
 
        
        vector<int> in(n+1,0);
        vector<int> out(n+1,0);
      

        for(vector<int> temp : trust){
            
            in[temp[1]]++;
            out[temp[0]]++;
            
        }
        
        for(int i=1; i<=n; i++){
            
            cout<<in[i]<<" "<<out[i]<<endl;
            
        }
        
        for(int i=1; i<=n; i++){
            
            if(in[i] == n-1 && out[i]==0)
                return i;
        }
        
        return -1;
        
    }
};