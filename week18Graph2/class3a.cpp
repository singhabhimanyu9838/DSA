#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<vector>
#include<stack>

using namespace std;

//tarjen Algorithm

class Graph{
    public:
        unordered_map<int , list<int>>adj;

        void addEdge(int u , int v , bool direction){
            if(direction == 1){
                adj[u].push_back(v);
            }else{
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }


        void printAdj(int n){
            for(int i =0;i<n;i++){
                cout<<i<<"-> {";
                for(auto nbr:adj[i]){
                    cout<<nbr<<", ";
                }
                cout<<"}"<<endl;
            }
        }

        void countBridge(int src ,int parent , vector<int>&tin , vector<int>&low , unordered_map<int , bool>& vis , int timer){
            timer++;
            vis[src] = true;
            tin[src] = timer;
            low[src] = timer;

            //neighbours pe travel krte h
            for(auto nbr : adj[src]){
                //kyoki undirected graph h , toh
                //neighbour bhi ho skta h
                if(nbr == parent){
                    continue;
                }else if(!vis[nbr]){
                    //normal traversal kro and check for bridges
                    countBridge(nbr , src , tin , low , vis , timer);
                    //ab main wapas aaya huu , let check the bridge check

                    //isko yaad rkho
                    low[src] = min(low[src] , low[nbr]); 
                    //^^^^

                    if(low[nbr] > tin[src]){
                        //bridge exist
                        cout<<"bridge found ";
                        cout<<nbr<<"-"<<src<<endl;
                    }
                }else{
                    //already visited and not parent
                    //low time ko update kro if possible
                    low[src] = min(low[src] , low[nbr]); 
                }
            }
        }

};

int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(0,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    int n =5;
    // g.printAdj(n);

    int timer =0;
    int src =0;
    int parent = -1;
    vector<int>tin(n);
    vector<int>low(n);
    unordered_map<int,bool>vis;
    g.countBridge(src , parent , tin , low , vis , timer);

    return 0;
}