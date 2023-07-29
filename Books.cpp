#include <iostream>

using namespace std;
const int N=1e5+5;

int n,t,sum=0,ans=0,a[N],idx=0;

int main(){
    cin>>n>>t;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        while(idx<n && sum+a[idx]<=t){
            sum+=a[idx];
            idx++;
        }
        ans = max(ans,idx-i);
        sum-=a[i];
    }
    cout<<ans;
}