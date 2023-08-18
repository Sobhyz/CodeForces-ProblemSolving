#include <bits/stdc++.h>

using namespace std;
const int N=1e6+6;


int a[N],n,x;

int main(){
    // freopen("in.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int mx=a[n-1];
    int ans=1;
    for(int i=2;i<=mx;i++){
        int c=0,mul=1,curr=i;
        while(curr<=mx){
            curr=i*mul;mul++;
            c+=(upper_bound(a,a+n,curr)-lower_bound(a,a+n,curr));
        }
        if(c>1)ans=max(ans,i);
    }
    cout<<ans;
}