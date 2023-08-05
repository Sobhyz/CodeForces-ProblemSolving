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
        if(b[n-1]+a[i]>=tmp1){
            tmp1=min(b[n-1]+a[i],tmp1);
        }
        ans=min(tmp1,ans);
    }
    for(int i=0;i<n;i++){
        if(a[n-1]+b[i]>=tmp2){
            tmp2=min(a[n-1]+b[i],tmp2);
        }
        ans=min(tmp2,ans);
    }
    cout<<ans;
}