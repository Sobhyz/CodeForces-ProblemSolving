#include <iostream>
#include <map>

using namespace std;
const int N=1e5+5;

long long int t,n,a[N],sum;
bool vis[N];

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        memset(vis,0, sizeof vis);
        int x=0;
        for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];x+=(a[i]==1);}
        ((sum >= x + n) && n>1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}