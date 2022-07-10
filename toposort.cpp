// #include <bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>
using namespace std;

void topo(int i,vector<bool> &visited, stack<int> &s,unordered_map<int,vector<int>> adj){
    visited[i-1]=true;
    
    for(auto j:adj[i]){
        if(!visited[j]){
            topo(j,visited,s,adj);
        }
    }
    s.push(i);
}

void addedge(int u,int w,unordered_map<int,vector<int>> &adj){
    adj[u].push_back(w);
}


int main()
{
    unordered_map<int,vector<int>> adj;
    addedge(1,2,adj);
    addedge(1,3,adj);
    addedge(2,4,adj);
    addedge(3,4,adj);
    addedge(4,5,adj);
    addedge(4,6,adj);
    addedge(5,6,adj);
    
    vector<bool> visited(7,false);
    stack<int> s;
    topo(1,visited,s,adj);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}



void print(unordered_map<int,vector<int>> &adj){
    for(auto i: adj){
        cout<<i.first<<"->";
        for(auto j: i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}