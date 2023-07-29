#include <iostream>
#include <vector>

using namespace std;

const int N=2e5+2;
int n,tree[N],ans[N];
bool vis[N];
vector<int> adj[N];

int solve(int x)
{
    vis[x]=true;
    int tmp=ans[x];
    for(int i : adj[x])
    {
        if(!vis[i])
        {
            ans[x]++;
            tmp+=solve(i)+1;
        }
    }
    return ans[x]=tmp;
}

int  main()
{
    cin>>n;
    for(int i=2;i<=n;i++)
        {scanf("%d",tree+i);
        adj[i].push_back(tree[i]);
        adj[tree[i]].push_back(i);
        }

    solve(1);
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<' ';
    }
    
}