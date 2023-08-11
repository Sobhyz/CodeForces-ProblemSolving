#include <iostream>

using namespace std;

int n,p=0,x=1,mx=0,t,a[56];


int main(){
    cin>>t;
    while(t--){
        cin>>n;
        x=1;
        p=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        mx=a[n-1];
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]<=mx && x){mx=a[i];continue;}
            ans=max(ans,a[i]);
            x=0;
        }
        x ? cout<<0<<endl : cout<<ans<<endl;
    }
}
