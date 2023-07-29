#include <iostream>
#define ll long long int

using namespace std;

ll a[404][404],n,ans=0,h[404],v[404];

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            h[i]+=a[i][j];
            v[j]+=a[i][j];
        }
    }
    ll mxv=*max_element(v,v+n), mxh=*max_element(h,h+n);cout<<endl;
    if(mxv<0)ans+=mxv;
    else{
        ll tmp=0,sumv=0,ansv=0;
        for(int i=0;i<n;i++){
            cout<<v[i]<<' ';
            sumv+=v[i];
            ansv=max(ansv,max(tmp,sumv));
            if(tmp+v[i]<0){
                tmp=0;
            }
            else tmp+=v[i];
        }
        cout<<ansv<<endl;
        ans+=ansv;
    }
    cout<<endl;
    if(mxh<0)ans+=mxh;
    else{
        ll tmp=0,ansh=0,sumh=0;
        for(int i=0;i<n;i++){
            cout<<h[i]<<' ';
            sumh+=h[i];
            ansh=max(sumh,max(ansh,tmp));
            if(tmp+h[i]<0)tmp=0;
            else tmp+=h[i];

        }
        cout<<ansh<<endl;
        ans+=ansh;
    }
    cout<<ans;
}