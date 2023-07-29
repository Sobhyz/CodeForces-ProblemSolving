#include <iostream>

using namespace std;
const int N=1e5+5;

long long int n,m,k,a[N];


int main(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);
    long long int ans=0;
    long long int l=m+((m-1)*(k-1));
    for(int i=n-1;i>=0 && l--;i--){
        ans+=a[i];
    }
    cout<<ans;
    return 0;
}