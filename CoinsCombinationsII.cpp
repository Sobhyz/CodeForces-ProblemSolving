#include <iostream>
#define ll long long int
#include <cstring>

using namespace std;
const ll N=1e6+6,mod=1e9+7;
ll mem[N],n,m,a[N];

int main()
{
    memset(mem,0,sizeof mem);
    mem[0]=1;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j-a[i]>=0)
            {
                mem[j]+=mem[j-a[i]];
                mem[j]%=mod;
            }
        }
    }
    cout<<mem[m];
}
