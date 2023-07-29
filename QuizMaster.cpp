#include <iostream>
#include <cstring>
#define ll long long int


using namespace std;
const int N=1e5+5;
int n,m,a[N],t;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int mx=0,mn=n-1,ans=0;
        // cout<<upper_bound(a,a+n,11)-a<<endl;
        for(ll i=1;i<=m;i++)
        {
            ll mul=1,f=0;
            int idx,far=0;
            while(mul*i<=a[n-1]){
                idx=upper_bound(a,a+n,mul*i)-a;
                if(idx<=n && a[max(idx-1,0)]%i==0)
                {
                    if(abs(a[max(idx-1,0)]-a[mn])<=a[mx]-a[mn] || f==0)
                        far=max(far,max(idx-1,0));
                    f++;
                }
                // if(idx<n && a[idx]%i==0)
                // {
                //     if(abs(a[idx]-a[mn])<=a[mx]-a[mn] || f==0)
                //         far=max(far,idx);
                //     f++;
                // }
                mul++;
            }
            mn=min(mn,far);
            mx=max(mx,far);
            if(!f){ans=-1;break;}

        }
        if(ans==-1)
        {
            cout<<ans<<endl;
            continue;
        }
        cout<<a[mx]-a[mn]<<endl;
    }
}