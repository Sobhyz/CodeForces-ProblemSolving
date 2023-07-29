#include <iostream>

using namespace std;

int h[105],a[105];
int n,x,y;

int main()
{
    memset(h,0,sizeof h);
    memset(a,0,sizeof a);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        h[x]++;
        a[y]++;
    }
    int ans=0;
    for(int i=1;i<=100;i++)
    {
        if(a[i]>0&&h[i]>0)
            ans+=a[i]*h[i];
    }
    cout<<ans;
}