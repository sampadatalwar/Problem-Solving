class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int, vector<int>> adj;
        queue<int> q;
        vector<bool> seen(n,false);
        
        for(int i=0; i<edges.size(); i++){
            
            int s = edges[i][0];
            int d = edges[i][1];
            
            if(adj.find(s) == adj.end()){
                vector<int> temp;
                adj[s] = temp;
            }
            if(adj.find(d) == adj.end()){
                vector<int> temp;
                adj[d] = temp;
            }
            
            adj[s].push_back(d);
            adj[d].push_back(s);
            
        }
        
          
        q.push(source);
        seen[source] = true;
        
        while(!q.empty()){
            
            int current = q.front();
           
            for(int i=0; i<adj[current].size(); i++){
                
                int vertex =  adj[current][i];
                
                if(!seen[vertex]){
                    
                    q.push(adj[current][i]);
                    seen[vertex] = true;
                } 
                if(seen[destination])
                    return true;
            }
             q.pop();
        }
        if(seen[destination])
            return true;
        
        return false;
    }
};