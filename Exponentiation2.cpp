#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const ll mod=1e9+7;
ll n,a,b,c;

ll solve(ll x,ll y, ll m){
    ll res = 1;
    while(y>0){
        if(y&1)res = (res * x) % m;
        y =(y>>1);
        x = (x*x)%m;
    }
    return res%m;
}

int main(){
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<solve(a,solve(b,c,mod-1),mod)<<endl;
    }
}