#include <iostream>
#include <cstring>

using namespace std;
const int N=1e5+5,mx=0x3f3f3f3f;
int n,m,a[N],p[N],mem[1003][N];

int main()
{
    cin>>n>>m;
    memset(mem,0,sizeof mem);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>p[i];
    int ans=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j-a[i]>=0)
                mem[i][j]=max(mem[i-1][j],mem[i-1][j-a[i]]+p[i]);
            else{
                mem[i][j]=max(mem[i][j],mem[i-1][j]);
            }
            ans=max(ans,mem[i][j]);
        }
    }
    
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=0;j<=m;j++)
    //     {
    //         cerr<<mem[i][j]<<' ';
    //     }
    //     cerr<<endl;
    // }
    cout<<ans;
}