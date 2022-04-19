class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        
        if(edges.size() == 0 && n == 1)
            return true;
        
        unordered_map<int, vector<int>> adj;
        vector<bool> seen(n,false);
        stack<int> s;
        for(int i=0; i<n; i++){
            
            vector<int> temp;
            adj[i] = temp;
            
        }
        
        for(int i=0; i<edges.size(); i++){
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        s.push(0);
        seen[0] = true;
        
        cout<<"dfs"<<endl;
        while(!s.empty()){
            
            int current = s.top();
            s.pop();
            
            for(int i=0; i<adj[current].size(); i++){
                
                int x = adj[current][i];
                cout<<x<<" "<<endl;
                if(seen[x])
                    return false;
                s.push(x);
                seen[x] = true; 
                
                adj[x].erase(find(adj[x].begin(), adj[x].end(), current));
                
            }
            
            
        }
        cout<<"Seen "<<endl;
        for(bool b : seen){
            cout<<b<<" ";
            
        }
        for(bool b : seen){
            if(!b)
                return false;
        }
        
       return true;     
    }
};