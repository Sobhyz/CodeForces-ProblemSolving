#include <iostream>
#include <cstring>
#include <algorithm>
#define ll long long int

using namespace std;

const int N=2e5+5;
int t,n;
ll a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=n-1)sum+=a[i];
        }
        ll ans=1;
        for(int i=n-1;i>=0;i--)
        {
            ans=max(ans,__gcd(sum,a[i]));
            sum-=a[i]-1;
            a[i-1]+=a[i];

        }
        cout<<ans<<endl;
    }
}