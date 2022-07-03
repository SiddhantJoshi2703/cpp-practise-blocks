#include <iostream>
#include <queue>
#include<vector>
#include<list>
using namespace std;

void addEdge(int v, int w,vector<list<int>> &adj)  {adj[v].push_back(w); }

void bfs(int s,vector<list<int>> adj){
    vector<bool> visited;
    visited.resize(4,false);
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int s=q.front();
        cout<<q.front()<<" ";
        q.pop();
        for (auto i: adj[s])
        {
            if (!visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
int main()
{
    vector<list<int>> adj;  
    adj.resize(4);
    addEdge(0, 1,adj);
    addEdge(0, 2,adj);
    addEdge(1, 2,adj);
    addEdge(2, 0,adj);
    addEdge(2, 3,adj);
    addEdge(3, 3,adj);
    bfs(2,adj);
    return 0;
}
