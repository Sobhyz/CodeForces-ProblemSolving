#include <iostream>
#include <vector>
#include <set>
#define pb push_back


using namespace std;
const int N=1e5+5;

int n,m,k,u,v,c,x,a[N];
vector<int> adj[N];
bool vis[N];
set<int>ans;

void dfs(int j){
    vis[j]=1;
    ans.insert(j);
    for(int i=0;i<adj[j].size();i++){
        if(!vis[adj[j][i]]){dfs(adj[j][i]);}
    }
}

int main(){
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        cin>>x;
        for(int j=1;j<k;j++){
            cin>>u;
            adj[u].pb(x);
            adj[x].pb(u);
        }
    }
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>a[i];
        memset(vis,0,sizeof vis);
        dfs(a[i]);
    }
    for(int i=0;i<c;i++)ans.erase(a[i]);
    cout<<ans.size()<<endl;
    set<int>::iterator it =ans.begin();
    for(;it!=ans.end();it++)cout<<*it<<' ';
}