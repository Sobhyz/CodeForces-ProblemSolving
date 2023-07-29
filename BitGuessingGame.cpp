#include <iostream>
#define ll long long int


using namespace std;

int t;
ll n;

int main()
{
    cin>>t;
    while(t--)
    {
        ll ans=1;
        cout<<"- 1"<<endl;
        while(cin>>n && n>0){
            ll val=(1<<(n))-1;
            cout<<"- "<<val<<endl;
            ans+=val;
            cout.flush();
        }
        cout.flush();
        cout<<"! "<<ans<<endl;
    }
}
