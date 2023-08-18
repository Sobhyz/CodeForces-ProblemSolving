#include <bits/stdc++.h>
#define ll long long int


using namespace std;
const ll mod=1e9+7;
ll n,a,b;
ll solve(ll x, ll y){
    ll res=1;
    while(y>0){
        if(y&1)res = (res*x)%mod;
        x = (x*x)%mod;
        y = (y>>1);
    }
    return res;
}

int main(){
    // cout<<solve(2,3)<<endl;
    cin>>n;
    while(n--){
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
}