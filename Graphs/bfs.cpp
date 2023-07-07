#include <iostream>
using namespace std;

void BFS(vector<int> adj[], int v, int src)
{
    bool visited[v + 1];
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }

    visited[src] = true;
    q.push(src);

    while (q.empty() == false)
    {
        int u = q.front();
        cout << u << " ";
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 2, 4);

    cout << "Following is Breadth First Traversal: " << endl;
    BFS(adj, V, 0);

    return 0;
}