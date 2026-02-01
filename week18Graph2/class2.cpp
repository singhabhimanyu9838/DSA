#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
#include <algorithm>
#include <stack>
#include<set>
#include<climits>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;
    void addEdge(int u, int v, int w, bool direction)
    {
        // 0 -> undirected
        // 1 -> directed

        if (direction == 0)
        {
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        else
        {
            adj[u].push_back({v, w});
        }
    }

    void shortestDistDijkstra(int src, int n)
    {
        vector<int>dist(n+1 , numeric_limits<int>::max());
        set<pair<int,int>>st;

        //initial state
        dist[src] =0;
        st.insert({0,src});

        //main logic
        while(!st.empty()){
            auto topElement = *(st.begin());
            int topNodeDistance = topElement.first;
            int topNode = topElement.second;

            //pop this node
            st.erase(st.begin());

            //neighbour pr jao
            for(auto nbr : adj[topNode]){
                //nbr is a pair
                //nbr = {a,b}
                //a -> node
                //b -> wt
                int nbrNode = nbr.first;
                int nbrDistance = nbr.second;
                if(dist[topNode] + nbrDistance < dist[nbrNode]){
                    //2 kaam krna hai
                    //distance array ko update krna h
                    //set ko update krna h
                    auto result = st.find({dist[nbrNode] , nbrNode});
                    if(result != st.end()){
                        //entry found
                        //remove this entry
                        st.erase(result);

                    }
                    dist[nbrNode] = dist[topNode] + nbrDistance;
                    st.insert({dist[nbrNode] , nbrNode});
                }
            }
        }
        
        
        cout<<"Printing the result"<<endl;
        for(int i =0;i<n;i++){
            cout<<dist[i]<<" ";
        }

    }

    void bellmanFordAlgo(int src , int n){
        vector<int>dist(n ,INT_MAX);
        dist[src] =0;

        //n-1 timea loop chaloa
        for(int i=0;i<n-1;i++){
            //hr edge pr jao and relaxation stp kro
            for(auto a:adj){
                for(auto b:a.second){
                    //a -> pair<int , list<pair<int,int>> >
                    //a.first = u
                    //a.second -> nbr of u node -> list <pair<int ,int>>
                    //b -> pair<int , int>
                    //b.fist -> v
                    // b.second -> wieght
                    int  u = a.first;
                    int v = b.first;
                    int wt = b.second;
                    if(dist[u] != INT_MAX && dist[u] + wt < dist[v]){
                        dist[v] = dist[u] + wt;
                    }
                }
            }
        }

        bool negativeCyclePresent = false;

        for(auto a:adj){
                for(auto b:a.second){
                    //a -> pair<int , list<pair<int,int>> >
                    //a.first = u
                    //a.second -> nbr of u node -> list <pair<int ,int>>
                    //b -> pair<int , int>
                    //b.fist -> v
                    // b.second -> wieght
                    int  u = a.first;
                    int v = b.first;
                    int wt = b.second;
                    if(dist[u] != INT_MAX && dist[u] + wt < dist[v]){
                        dist[v] = dist[u] + wt;
                        negativeCyclePresent=true;
                        break;
                    }
                }
        }

        if(negativeCyclePresent==true){
            cout<<"-ve cycle prsent"<<endl;
        }
        else{
            cout<<"-ve cycle not prsent"<<endl;
            cout<<"printing Bellman for result: "<<endl;
            for(int i=0;i<n;i++){
                cout<<dist[i]<<" ";
            }
        } 
    }

    void floyWarshallAlgo(int n){
        vector<vector<int>>dist(n , vector<int>(n,1e9));

        //Step1 : copy all distance from graph to matrix
        for(int i=0;i<n;i++){
            dist[i][i] =0;
        }

        //step2: copy all distance from graph to matrix

        for(auto a: adj){
            for(auto b:a.second){
                int u = a.first;
                int v = b.first;
                int wt = b.second;
                dist[u][v] = wt;
            }
        }

        //main logic
        for(int helper =0;helper<n;helper++){
            for(int src =0;src<n;src++){
                for(int dest=0;dest<n;dest++){
                    dist[src][dest] = min(dist[src][dest] , dist[src][helper] + dist[helper][dest]);
                }
            }
        }

        cout<<"Printing result of FlowdWarshal algo "<<endl;

        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cout<<dist[i][j]<<", ";
            }
            cout<<endl;
        }

    }
     
};

int main()
{
    Graph g;

    // g.addEdge(0, 1, 5, 1);
    // g.addEdge(0, 4, 3, 1);
    // g.addEdge(0, 2, 13, 1);
    // g.addEdge(1, 2, 7, 1);
    // g.addEdge(1, 4, 1, 1);
    // g.addEdge(3, 2, 2, 1);
    // g.addEdge(4, 3, 6, 1);

    // g.shortestDistDijkstra(0 , 5);

    // g.addEdge(0, 1, -1, 1);
    // g.addEdge(1, 4, 2, 1);
    // g.addEdge(0, 2, 4, 1);
    // g.addEdge(3, 2, 5, 1);
    // g.addEdge(4, 3, -3, 1);
    // g.addEdge(1, 2, 3, 1);
    // g.addEdge(1, 3, 2, 1);
    // g.addEdge(3, 1, 1, 1);

    // g.bellmanFordAlgo(0,5);

    g.addEdge(0, 2, -2, 1);
    g.addEdge(1, 0, 4, 1);
    g.addEdge(1, 2, 3, 1);
    g.addEdge(3, 1, -1, 1);
    g.addEdge(2, 3, 2, 1);

    g.floyWarshallAlgo(4);




    return 0;
}