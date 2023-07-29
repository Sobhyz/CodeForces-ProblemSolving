#include <iostream>
#define ll long long int

using namespace std;
const int N=1e5+5;
ll a[N],n,ans=0,mx=0,p=0;

int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    mx=a[0];

    for(int i=1;i<n;i++){
        a[i]+=p;
        // cout<<a[i]<<endl;
        if(a[i]<mx){
            // cout<<ans<<endl;
            ans+=((mx-a[i]));
            p=mx-a[i];
        }
        else if(a[i]>=mx){mx=a[i];}
    }
    cout<<ans;
}