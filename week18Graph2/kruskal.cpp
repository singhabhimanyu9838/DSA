class Solution {  
    static bool mycmp(vector<int>&a , vector<int>&b){
        return a[2] < b[2];
    } 
  public:
  
    int findParent(vector<int>&parent  , int node ){
        if(parent[node] == node){
            return node;
        }
        
        return parent[node] = findParent(parent , parent[node]);
        
    }
    
    void unionSet(int u , int v , vector<int>&parent , vector<int>&rank){
        u = findParent(parent , u);
        v = findParent(parent , v);
        
        if(rank[u] < rank[v]){
            parent[u] = v;
            rank[v]++;
        }else{
            parent[v] = u;
            rank[u]++;
        }
    }   
  
    int spanningTree(int V, vector<vector<int>>& edges) {
         
        
        //Krushkal ALgo...
     
        
        
        vector<int>parent(V);
        vector<int>rank(V , 0);
        
        //make all nodes as individual comp
        for(int u=0;u<V;u++){
            parent[u] = u;
        }
        
        
        sort(edges.begin() , edges.end() , mycmp);
        
        int ans =0;
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            
            u = findParent(parent , u);
            v = findParent(parent , v);
            
            if(u != v){
                //union 
                unionSet(u , v , parent , rank);
                ans += w;
            }
            
        }
        
        return ans;
        
        
    }
};