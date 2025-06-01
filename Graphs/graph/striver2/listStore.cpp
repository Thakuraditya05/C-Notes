// space consuming 0(2*node )
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m; //nods and edges
    cin>>n>>m;
    // graph here 
    vector<int>adj[n+1]; // list
    for(int i=0;i<m;i++){
         int u,v;
         cin>>n>>v;
         adj[u].push_back(v);
         adj[v].push_back(u); // this line will note be needed when graph is undireted 

    }
    return 0;

}