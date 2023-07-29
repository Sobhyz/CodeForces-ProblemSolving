#include <iostream>
#define ll long long int

using namespace std;
const ll N=1e9+7;
ll n,t;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans=0,tmp=(n*(n-1));
        tmp%=N;
        ll fact=1;
        for(ll i=1;i<=n;i++)
            {fact*=i;fact%=N;}
        cout<<(fact*tmp)%N<<endl;
    }
}
