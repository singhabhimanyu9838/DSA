#include<iostream>
#include<set>
#include<unordered_map>
#include<algorithm>
#include<list>
#include<vector>


using namespace std;

class Graph {
    public:
        unordered_map<int , list<pair<int,int>>>adj;
        void addEdge(int u , int v , int w , bool dir){
            if(dir){
                adj[u].push_back({v ,w});
            }else{
                adj[u].push_back({v ,w});
                adj[v].push_back({u ,w});
            }
        }

        void print(int n){
            for(int i=0;i<n;i++){
                cout<<i << "-> {";
                for(auto nbr : adj[i]){
                    cout<<nbr.first <<", ";
                }
                cout<<"}"<<endl;
            }
        }

        void BellmanFord(int src , int n ){
            vector<int>dist(n , 10000000);
            dist[src] = 0;
            for(int i =0;i<n-1 ;i++){
                for(auto node : adj ){
                    int u = node.first;
                    for(auto b : node.second){
                        int v = b.first;
                        int w = b.second;
                        if(dist[u] != 10000000 && dist[u] + w < dist[v]){
                            dist[v] = dist[u] + w ;
                        }
                    }
                }
            }

            bool isCycle = false;
            for(auto node : adj ){
                    int u = node.first;
                    for(auto b : node.second){
                        int v = b.first;
                        int w = b.second;
                        if(dist[u] != 10000000 && dist[u] + w < dist[v]){
                            isCycle = true;
                            break;
                            dist[v] = dist[u] + w ;

                        }
                    }
            }

            if(isCycle){
                cout<<"cycle present";

            }else{
                cout<<"no cycle present";
            }
        }
};


int main(){

    Graph g;

    g.addEdge(0, 1, -1, 1);
    g.addEdge(1, 4, 2, 1);
    g.addEdge(0, 2, 4, 1);
    g.addEdge(3, 2, 5, 1);
    g.addEdge(4, 3, -3, 1);
    g.addEdge(1, 2, 3, 1);
    g.addEdge(1, 3, 2, 1);
    g.addEdge(3, 1, 1, 1);

    g.BellmanFord(0,5);



    return 0;
}