#include <iostream>

using namespace std;
const int N=1e3+3;
int a[N];
int n,m;

int main(){
    cin>>n>>m;
    int ans=1e9;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0, j=n-1;j<m;i++,j++)
        ans=min(ans, a[j]-a[i]);
    cout<<ans;
}