#include <iostream>

using namespace std;

const int N=2e5+5;
int a[N],t,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];

        int ans=0,sorted=1;
        int mid=(n/2);
        for(int i=0;i<n-1 && sorted;i++)
        {
            sorted=((a[i+1]-a[i]==1)& sorted);
        }
        if(sorted)
        {
            cout<<0<<endl;
            continue;
        }
        ans=n/2;
        int c=1,mx=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]==1)c++;
            else c=1;
            mx=max(c,mx);
        }
        int rest=n-mx;

        cout<<(rest/2)+(rest&1)<<endl;

    }
}