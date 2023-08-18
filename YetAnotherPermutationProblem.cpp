#include <bits/stdc++.h>

using namespace std;
const int N=1e5+5;

int t,n;
bool vis[N];

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        memset(vis,0,sizeof vis);
        for(int i=1;i<=n;i+=2){
            for(int j=i;j<=n;j*=2){
                if(!vis[j])
                    cout<<j<<' ';
                vis[j]=1;
            }
        }
        cout<<endl;
    }
}