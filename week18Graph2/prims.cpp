class Solution {
  public:
  
  
    int getMinValueNode(vector<int>&key , vector<int>&mst){
        int temp = INT_MAX;
        int index = -1; // rep. actual node having min vale
        for(int i=0;i<key.size();i++){
            if(key[i] < temp && mst[i] == false){
                temp = key[i];
                index = i;
            }
        }
        return index;
    }
    
  
    int spanningTree(int V, vector<vector<int>>& edges) {
        
        //PRIM'S Algorithm
        
        // code here
        vector<int>key(V , INT_MAX);
        vector<int>mst(V , false);
        vector<int>parent(V , -1);
        
        key[0] = 0;
        
        unordered_map<int , list<pair<int,int>>>adj;
        for(auto edg : edges){
            adj[edg[0]].push_back({edg[1] , edg[2]});
            adj[edg[1]].push_back({edg[0] , edg[2]});
            
        }
        
        while(true){
            //step 1 :
            int u = getMinValueNode(key , mst);
            if(u == -1)break;
            //step 2 :
            mst[u] = true;
            
            //step 3 : process all adj node to u
            
            for(auto edge : adj[u]){
                 int v = edge.first;
                 int w = edge.second;
                 if(mst[v] == false && w < key[v]){
                     key[v] = w;
                     parent[v] = u;
                 }
            }
            
        }
        
        int sum =0;
        for(int u = 0;u<parent.size();u++){
            if(parent[u] == -1)continue;
            for(auto edge : adj[u]){
                int v = edge.first;
                int w = edge.second;
                if(v == parent[u]){
                    sum += w;
                }
            }
        }
        
        return sum;
        
        
    }
};