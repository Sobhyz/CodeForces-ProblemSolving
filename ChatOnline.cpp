#include <iostream>

using namespace std;
const int N=1e3+1;

int p,q,s,e,ans=0,a[N],b[N],val[N],l,r;

int main(){
    cin>>p>>q>>s>>e;
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);
    memset(val,0,sizeof val);
    for(int i=0;i<p;i++){
        cin>>l>>r;
        for(int j=l;j<=r;j++)a[j]=1;
    }
    for(int i=0;i<q;i++){
        cin>>l>>r;
        for(int j=l;j<=r;j++)b[j]=1;
    }
    for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            if(a[i] && a[j]){
                val[i-j]=1;
                val[i-j-1]=1;
            }
        }
    }

    for(int i=s;i<=e;i++)ans+=(val[i]);
    
    cout<<ans;
}