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
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-a[j]>=0)
            {
                mem[i]+=mem[i-a[j]];
                mem[i]%=mod;
            }
        }
    }
    cout<<mem[m];
}
