#include<iostream>
using namespace std;
int main(){
    int n,m,wht; //nods and edges
    cin>>n>>m;
    // graph here 
    int adj[n+1][n+1]; // matrix array 
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u][v]=wt;
        adj[v][u]=wt;
    }
    return 0;

}