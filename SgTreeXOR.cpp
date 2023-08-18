#include <bits/stdc++.h>

using namespace std;
const int N=2e5+5;

int n,q,a[N],t[4*N],l,r;

void build(int v=1,int tl=1,int tr=n){
    if(tl==tr)t[v]=a[tl];
    else{
        int tm= (tl+tr)/2;
        build(v*2,tl,tm);
        build((v*2)+1,tm+1,tr);
        t[v] = (t[v*2]^t[(v*2)+1]);
    }
}

int query(int v=1,int tl=1,int tr=n){
    if(tl>tr || tl>r || tr<l)return 0;
    if(tl>=l && tr<=r)return t[v];
    else{
        int tm=(tl+tr)/2;
        return (query(v*2,tl,tm)^query((v*2)+1,tm+1,tr));
    }
}

int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    build();
    // for(int i=1;i<=4*n;i++)cout<<t[i]<<' ';
    while(q--){
        cin>>l>>r;
        cout<<query()<<endl;
    }
}