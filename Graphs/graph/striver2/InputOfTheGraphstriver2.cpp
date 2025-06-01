// gives n m and directed or not n=noed and m=edge 
// if n=constant and m=edges 



// matrix system to represent graph 
// space consuming 0(n2)
#include<iostream>
using namespace std;
int main(){
    int n,m; //nods and edges
    cin>>n>>m;
    // graph here 
    int adj[n+1][n+1]; // matrix array 
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    return 0;

}