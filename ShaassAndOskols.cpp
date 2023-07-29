#include <iostream>

using namespace std;

int a[105],n,m,x,y;

int main()
{
    memset(a,0,sizeof a);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    while(m--)
    {
        cin>>x>>y;
        if(x==1)
        {
            a[x+1]+=(a[x]-y);
            a[x]=0;
            continue;
        }
        else if(x==n)
        {
            a[x-1]+=(y-1);
            a[x]=0;
            continue;
        }
        a[x-1]+=(y-1);
        a[x+1]+=(a[x]-y);
        a[x]=0;
    }
    for(int i=1;i<=n;i++)
     cout<<a[i]<<endl;
}