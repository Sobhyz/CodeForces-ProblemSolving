#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const int N=2e5+5;

int n,q,o,l,r;
ll a[N],t[4*N];

void build(int v=1,int tl=1,int tr=n){
    if(tl==tr)t[v]=a[tl];
    else{
        int tm=(tl+tr)/2;
        build(v*2,tl,tm);
        build((v*2)+1,tm+1,tr);
        t[v] = min(t[v*2], t[(v*2)+1]);
    }
}

ll query(int v=1,int tl=1,int tr=n){
    if(tl>tr || tl>r || tr<l)return 1e9+9;
    else if(tl>=l && tr<=r)return t[v];
    else{
        int tm= (tl+tr)/2;
        return min(query(v*2,tl,tm),query((v*2)+1,tm+1,tr));
    }
}

void update(int v,int tl,int tr,int idx,int val){
    if(tl>tr || tl>idx || tr<idx)return;
    else if(tl==tr)t[v]=val;
    else{
        int tm=(tl+tr)/2;
        update(v*2,tl,tm,idx,val);
        update((v*2)+1,tm+1,tr,idx,val);
        t[v] = min(t[v*2], t[(v*2)+1]);
    }
}

int main(){
    cin>>n>>q;
    for(int i = 1 ; i< 4*N ; i++)t[i]=(int)1e9+9; 
    for(int i=1;i<=n;i++)cin>>a[i];
    build();
    while(q--){
        cin>>o>>l>>r;
        if(o==2)cout<<query()<<endl;
        else update(1,1,n,l,r);
    }
}
