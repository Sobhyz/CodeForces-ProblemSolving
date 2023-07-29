#include <iostream>
#define ll long long int

using namespace std;
ll a[105],n,t;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            if((!(a[i]&1) && !(a[i+1]&1)) || ((a[i]&1) && (a[i+1]&1)))
            {
                ans+=1;
                a[i+1]*=a[i];
            }
        }
        cout<<ans<<endl;
    }
}