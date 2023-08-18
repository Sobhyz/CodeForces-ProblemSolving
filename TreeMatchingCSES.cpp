#include <bits/stdc++.h>

using namespace std;
const int N=2e5+5;

vector<int> adj[N];
int n,u,v,val[N],ans=0;
bool vis[N];

int d(int x,int used=0){
    int op1,op2;
    op1=op2=0;
    if(!used){
        for(int i : adj[x]){
            if(!vis[i])
                ans+=dfs(i,1)
        }
    }
    else{
        for(int i: adj[x]){
            if(!vis[i]){
                ans=
            }
        }
    }

    return 1;
}

int main(){
    memset(val, 0 ,sizeof val);
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    d(1);
    // memset(vis,0,sizeof vis);
    // dfs(1);
    // for(int i=1;i<=n;i++)cout<<val[i]<<' ';
    cout<<ans;
}