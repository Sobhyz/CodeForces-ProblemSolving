#include <iostream>
#include <queue>

using namespace std;

int n,m,mat[103][103],u,v,ans=0;

int main(){
    cin>>n>>m;
    memset(mat,0,sizeof mat);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }
    queue<int> q;
    for(int x=1;x<=n;x++){
        for(int i=1;i<=n;i++){
            int c=0;
            for(int j=1;j<=n;j++){
                c+=mat[i][j];
            }
            if(c==1)q.push(i);
        }
        ans+=(q.size()>0);
        while(!q.empty()){
            int tmp=q.front();
            q.pop();
            for(int i=1;i<=n;i++){mat[tmp][i]=mat[i][tmp]=0;}
        }
    }
    cout<<ans;
    return 0;
}