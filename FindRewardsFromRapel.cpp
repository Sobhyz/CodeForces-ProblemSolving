#include <iostream>
#include <map>

using namespace std;
const int N=1e5+5;

long long int t,n,m,u,v,a[N];
map<long long int, int> ma;

int main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        long long int ans=0;
        ma.clear();
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(ma.find(a[i])!=ma.end())ans++;
            ma[a[i]]++;
        }
        // cout<<endl;
        // cout<<ans<<endl;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            u--;
            if(ma.find(a[u]+v)==ma.end()){ans++;}
            ma[a[u]+v]++;
            if(ma[a[u]]==1)ans--;
            ma[a[u]]--;
            cout<<ans<<endl;
        }
    }
}