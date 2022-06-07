// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclicUtil(int node,vector<int> adj[],bool visited[], bool *recStack){
        if(visited[node]==false){
            visited[node] = true;
            recStack[node] = true;
            vector<int>::iterator i;
            for (i = adj[node].begin(); i != adj[node].end();++i){
                
                if (recStack[*i])
                {
                    return true;
                }
                else if (!visited[*i] && isCyclicUtil(*i,adj,visited,recStack))
                {
                    return true;
                }
            }
        }
        recStack[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        // vector<bool> visited(V,false);
        // vector<bool> recStack(V,false);
        bool *visited = new bool[V];
        bool *recStack = new bool[V];
        for (int i = 0; i < V;i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }
        for(int i = 0;i<V;i++){
            if(isCyclicUtil(i,adj,visited,recStack)){
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends