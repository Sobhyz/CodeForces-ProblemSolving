#include <bits/stdc++.h>
#define ll long long int


using namespace std;

ll t,n;

int main() {
	cin>>t;
    while(t--){
       cin>>n;
       ll ans=0;
       for(ll i=1;i<=n;i++){
         ll tmp=0,x=1,mx=0;
         for(ll j=1;j<n-i+1;j++) {tmp+=(j*x);mx=max(mx,j*x);x++;}
         for(ll j=n;j>=n-i+1;j--) {tmp+=(j*x);mx=max(mx,j*x);x++;}
        ///cout<<endl;
         tmp-=mx;
         ans=max(tmp,ans);
       }
       cout<<ans<<endl;
    }
	return 0;
}