#include <iostream>

using namespace std;
const int N=1e5+5;

long long int n,a[N],b[N],tmp1,tmp2,ans=3e9+9;

int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    tmp1=a[n-1]+b[n-2];
    tmp2=a[n-2]+b[n-1];
    for(int i=0;i<n;i++){
        long long int t1= *lower_bound(a,a+n,tmp1-b[i]);
        long long int t2= *lower_bound(b,b+n,tmp2-a[i]);
        if(t1+b[i]>=tmp1)ans=min(ans,t1+b[i]);
        if(t2+a[i]>=tmp2)ans=min(ans,t2+a[i]);
    }
    cout<<ans;
}