class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int c = image[sr][sc];
        
        if(c != newColor){
            // recursive helper function
            dfs(image, sr, sc, newColor, c);
        }
        
        return image;
        
    }
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int c){
        
        if(image[sr][sc] == c){
            
            image[sr][sc] = newColor;
            
            if(sr-1 >=0)
                dfs(image, sr-1, sc, newColor, c);
            if(sc-1 >=0)
                dfs(image, sr, sc-1, newColor, c);
            if(sc+1 < image[0].size())
                dfs(image, sr, sc+1, newColor, c);
            if(sr+1 < image.size())
                dfs(image, sr+1, sc, newColor, c);
        }
            
        
        
            
        
    }
};