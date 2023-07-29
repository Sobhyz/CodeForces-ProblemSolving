#include <iostream>

using namespace std;
const int N=3e3+6,M=1e6+6;

int vis[N],n,m,x,freq[N];

int main(){
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>vis[i];
        if(i && vis[i]==vis[i-1]){
            i--;
            n--;
        }
    }
    for(int i=0;i<m;i++){
        cin>>freq[i];
        
    }
    int idx=0;
    for(int i=0;i<m && idx<n;i++){
        if(freq[i]>=vis[idx])idx++;
    }
    cout<<max(0,n-idx);
}
