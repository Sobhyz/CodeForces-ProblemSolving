#include <iostream>
#include <cstring>
#include <algorithm>
#define ll long long int

using namespace std;
const ll N=1e5+5,mod=1e9+7;
ll mem[N][104],n,m,a[N];

int main()
{
    memset(mem,0,sizeof mem);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll ans=0;
    if(!a[0])
        for(int i=1;i<=m;i++)
            mem[0][i]=1;
    else
        mem[0][a[0]]=1;
    for(int i=1;i<n;i++)
    {
        if(!a[i])
        {
            for(int j=1;j<=m;j++)
            {
                if(j-1>=1)
                    mem[i][j]=(mem[i][j]+mem[i-1][j-1])%mod;
                mem[i][j]=(mem[i][j]+mem[i-1][j])%mod;
                if(j+1<=m)
                    mem[i][j]=(mem[i][j]+mem[i-1][j+1])%mod;
            }
        }
        else{
            if(a[i]-1>=1)
                    mem[i][a[i]]=(mem[i][a[i]]+mem[i-1][a[i]-1])%mod;
            mem[i][a[i]]=(mem[i][a[i]]+mem[i-1][a[i]])%mod;
            if(a[i]+1<=m)
                mem[i][a[i]]=(mem[i][a[i]]+mem[i-1][a[i]+1])%mod;
        }
    }
    for(int i=1;i<=m;i++)
        ans=(ans+mem[n-1][i])%mod;

    cout<<ans;
}
