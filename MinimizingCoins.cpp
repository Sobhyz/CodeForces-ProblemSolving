#include <iostream>
#include <cstring>

using namespace std;

const int N=1e6+5,mx=0x3f3f3f3f;
int n,a[N],mem[N],m;

int main()
{
    memset(mem,0,sizeof mem);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    memset(mem,mx,sizeof mem);
    mem[0]=0;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-a[j]>=0)
                mem[i]=min(mem[i],mem[i-a[j]]+1);
        }
    }
    cout<<(mem[m]==mx ? -1 : mem[m]);
}