#include <iostream>

using namespace std;
const int N=1e5+5;
int n,k,a[N];

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)a[i]=i;
    if(n<=k){
        cout<<-1;
        return 0;
    }
    k=n-k-1;
    // for(int i=1;i<=n-k;i+=2)cout<<i+1<<' '<<i<<' ';
    for(int i=1;i<=n && k;i++,k--){
        swap(a[i],a[i+1]);
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<' ';
    return 0;
    
}