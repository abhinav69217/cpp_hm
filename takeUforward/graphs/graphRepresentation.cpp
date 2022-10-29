#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

// adjacency matrix for undirected graph
// time complexity: O(n)

    // int adj[n + 1][n + 1];
    // for (int i = 0; i < m; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;   //this statement will be removed in case of directed graph
    // }


// adjacency list for undirected graph
// time complexity: O(2E)
    // vector<int>adj[n+1];
    // for (int i = 0; i < m; i++)
    // {
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }
    

// adjacency list for directed graph
// time complexity: O(E)
    // vector<int> adj[n+1];
    // for(int i = 0; i < m; i++)
    // {
    //     int u, v;
    //     // u —> v
    //     cin >> u >> v;
    //     adj[u].push_back(v);
    // }


//undirected weighted graph(matrix)

    // int u,v,wt;
    // cin>>u>>v>>wt;
    // adj[u][v]=wt;
    // adj[v][u]=wt;


//directed weighted graph(matrix)

    // int u,v,wt;
    // cin>>u>>v>>wt;
    // add[u][v]=wt;


//undirected weighted graph(list)

    // int u,v,wt;
    // vector<pair<int,int>>adj[n+1];
    // for (int i = 0; i < m; i++)
    // {
    //     adj[u].push_back(make_pair(v,wt));
    //     adj[v].push_back(make_pair(u,wt));
    // }


// directed weighted graph(list)

    // int u,v,wt;
    // vector<pair<int,int>>adj[n+1];
    // for (int i = 0; i < m; i++)
    // {
    //     adj[u].push_back(make_pair(v,wt));
    // }
    


    return 0;
}