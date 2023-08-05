#include <iostream>

using namespace std;
const int N=1e6+6;
long long int freq[N],ans=0,a,b,mn[N];

long long int comp(long long int n){
    long long int tmp=n,sum=0;
    // cout<<n<<endl;
    if(n<=4)return n;
    while(tmp>=1){
        sum+=((tmp%10)*(tmp%10));
        tmp/=10;
    }
    n=sum;
    if(n<=4)return n;
    return comp(n);
}
int main(){
    cin>>a>>b;
    memset(mn,0x3f3f3f3f,sizeof mn);
    memset(freq,0,sizeof freq);
    for(long long int i=a;i<=b;i++){
        long long int x=comp(i);
        cout<<x<<' ';
        ans+=x;
    }
    cout<<ans;
}