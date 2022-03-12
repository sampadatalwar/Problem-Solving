class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        

        int rows = mat1.size();
        int cols = mat1[0].size();
        
        vector<vector<pair<int,int>>> matrix1(rows);
        
        for(int i=0; i<rows; i++){

            for(int j=0; j<cols; j++){
                
                if(mat1[i][j]!=0){

                    matrix1[i].push_back({mat1[i][j],j});
                }
            }
        }
        
        rows = mat2.size();
        cols = mat2[0].size();
        
        vector<vector<pair<int,int>>> matrix2(rows);
        
        for(int i=0; i<rows; i++){
            
            for(int j=0; j<cols; j++){
                
                if(mat2[i][j]!=0){
                    matrix2[i].push_back({mat2[i][j],j});
                }
            }
        }
        
        int m = mat1.size(), n = mat2[0].size();
        
        vector<vector<int>> result(mat1.size(), vector<int>(mat2[0].size(), 0));
        
        for(int i=0; i<m; i++){
            
            for(auto[a,b] : matrix1[i]){
                
                for(auto [c,d] : matrix2[b]){
                    
                    result[i][d] += a*c;
                }
            }
        }
        return result;
        
        
    }
};