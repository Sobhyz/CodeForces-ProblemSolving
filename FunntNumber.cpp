#include <iostream>

using namespace std;
const int N=1e7+6,mx=0x3f3f3f3f;
long long int freq[N],ans=0,a,b,mn[N];

long long int comp(long long int n){
    long long int tmp=n,sum=0;
    // cout<<n<<endl;
    while(tmp>=1){
        sum+=((tmp%10)*(tmp%10));
        tmp/=10;
    }
    if(!freq[n]){freq[n]=1;return mn[n]=min(min(n,mn[n]),comp(sum));}
    return mn[n]=min(n,min(mn[sum],mn[n]));
}

long long int solve(long long int n){
    long long int tmp=n,sum=0;
    // cout<<n<<endl;
    if(n<=4)return n;
    while(tmp>=1){
        sum+=((tmp%10)*(tmp%10));
        tmp/=10;
    }
    n=sum;
    if(n<=4)return n;
    return solve(n);
}

int main(){
    cin>>a>>b;
    memset(mn,0x3f3f3f3f,sizeof mn);
    memset(freq,0,sizeof freq);
    
    for(long long int i=1;i<=(int)1e6;i++){
        comp(i);
    }

    for(long long int i=a;i<=b;i++){
        ans+=mn[i];
    }
    cout<<ans;
}