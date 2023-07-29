#include <iostream>
#include <vector>
#define pb push_back

using namespace std;
const int N=1e5+5;

int n,u,v;
vector<int> adj[N],leaf;
bool vis[N];

void dfs(int x){
    vis[x]=1;
    bool isLeaf=true;
    for(int i=0;i<adj[x].size();i++){
        if(!vis[adj[x][i]]){
            isLeaf=false;
            dfs(adj[x][i]);
        }
    }
    if(isLeaf)leaf.pb(x);
}

int main(){
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int c=0;
    memset(vis,0,sizeof vis);
    dfs(1);
    for(int i=0;i<leaf.size();i++){
        for(int j=0;j<adj[leaf[i]].size();j++)c+=(adj[adj[leaf[i]][j]].size()==2 && adj[leaf[i]][j]!=1);
    }
    cout<<c;
    return 0;
}