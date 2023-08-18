#include <bits/stdc++.h>

using namespace std;
const int N=1e3+3;

int n,p,a[N],t,ans=0;

void solve(int i,int sum){
    //stopping condition
    if(sum==n){ans = 1;return;}
    if(i>=p || sum>n)return;
    solve(i+1,sum+a[i]);
    solve(i+1,sum);
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>p;
        for(int i=0;i<p;i++)cin>>a[i];
        ans=0;
        solve(0,0);
        if(ans==1)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}