#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const int N=25003;

vector<ll> a[N];
ll n,m,t;

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        pair<ll,ll> p[n];
        for(int i=0;i<n;i++){
            cin>>m;
            for(int j=0;j<m;j++){
                ll x;
                cin>>x;
                a[i].push_back(x);
            }
            sort(a[i].begin(),a[i].end());
            p[i].first = a[i][1];
            p[i].second = a[i][0];
        }
        sort(p,p+n);
        ll mn = __LONG_LONG_MAX__,ans=0;
        for(int i=0;i<n;i++){mn=min(mn,p[i].second);if(i)ans+=p[i].first;}
        cout<<ans+mn<<endl;
        for(int i=0;i<n;i++)a[i].clear();
    }
}