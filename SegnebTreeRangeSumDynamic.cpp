#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const int N=2e5+5;

ll a[N],t[4*N],q,o,l,r,n;

void build(int v=1,int tl=1,int tr=n){
    if(tl==tr)t[v]=a[tl];
    else{
        int tm=(tl+tr)/2;
        build(v*2,tl,tm);
        build((v*2)+1,tm+1,tr);
        t[v]=(t[v*2]+t[(v*2)+1]);
    }
}

ll sum(int v=1,int tl=1,int tr=n){
    if(tl>tr || tl>r || tr<l)return 0;
    else if(tl>=l && tr<=r)return t[v];
    else{
        int tm=(tl+tr)/2;
        return sum(v*2,tl, min(tm,tr)) + sum((v*2)+1,max(tl,tm+1),tr);
    }
}

void update(int v,int tl,int tr,int idx,ll val){
    if(tl>tr || tl>idx || tr<idx)return;
    else if(tl==tr)t[v]=val;
    else{
        int tm=(tl+tr)/2;
        update(v*2,tl,tm,idx,val);
        update((v*2)+1,tm+1,tr,idx,val);
        t[v] = t[v*2] + t[(v*2)+1];
    }

}



int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    build();
    while(q--){
        cin>>o>>l>>r;
        if(o==2){
            cout<<sum()<<endl;
        }
        else{
            update(1,1,n,l,r);
        }
    }
}