#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<unordered_map>
#include<queue>
#include<algorithm>
#include<stack>

using namespace std;

////Sortest path from src to destination

class Graph{
    public:
        unordered_map<int , list<int>>adj;
    
        void addEdge(int u , int v , bool dir){
            if(dir){
                adj[u].push_back(v);
            }else{
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }

        void print(int n ){
            for(int i =0;i<n;i++){
                cout<<i << "-> {";
                for(auto nbr : adj[i]){
                    cout<<nbr<<" ";
                }
                cout<<"}"<<endl;
            }
        }

        void sortestPathSrctoDest(int src , int dest){
            unordered_map<int ,bool>vis;
            unordered_map<int , int>parent;
            queue<int>q;

            q.push(src);
            vis[src] = true;
            parent[src] = -1;
            while(!q.empty()){
                int frontNode = q.front();
                q.pop();
                for(auto nbr : adj[frontNode]){
                    if(!vis[nbr]){
                        vis[nbr] = true;
                        q.push(nbr);
                        parent[nbr] = frontNode;
                    }
                }
            }

            //yha tk parent node ready hai ab parent node pr 
            //dest to src travel krenge
            vector<int>path;
            int node = dest;
            while (node != -1)
            {
                path.push_back(node);
                node = parent[node];
            }

            reverse(path.begin() , path.end());
            cout<<"Path traversal from src to destination :-";
            for(auto i : path){
                cout<<i<<" -> ";
            }
            cout<<endl;

        }


};


int main(){
    Graph g;

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(2,4,0);
    g.addEdge(4,5,0);
    g.addEdge(5,3,0);

    g.print(5);

    g.sortestPathSrctoDest(0 , 5);

    return 0;
}