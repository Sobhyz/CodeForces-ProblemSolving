 #include <iostream>
 #define pb push_back

 using namespace std;
 const int N=1e3+3;

 int n,m,u,v,root=0;
int vis[N];

 int main(){
    cin>>n>>m;
    memset(vis,0,sizeof vis);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        vis[u]=1;
        vis[v]=1;
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            root=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++){
        if(i==root)continue;
        cout<<root<<' '<<i<<endl;
    }
    return 0;
    
 }