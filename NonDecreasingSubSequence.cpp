#include <iostream>
#define ull unsigned long long

using namespace std;
const ull INF=-1;
const int N=3e3+3;

ull a[N];
int n,ans=0,mem[N];


int solve(int i=0,ull curr=a[1]){
    // cout<<curr<<' '<<i<<endl;
    if(i>=n)return 0;
    int &ret=mem[i];
    if(~ret)return ret;
    if(curr>=a[i])return ret=solve(i+1,a[i+2]);
    return ret=min(solve(i,curr+a[i+2]),solve(i+2,a[i+3]))+1;

}

int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    memset(mem,-1,sizeof mem);
    cout<<solve()<<endl;;
    for(int i=0,j=1;j<n;j++){
        // cout<<a[i]<<' '<<a[j]<<endl;
        if(a[j]>=a[i])i=j;
        else{
            if(j==n-1){
                while(a[j]<a[i])
                    {a[j]+=a[i];ans++;i--;}
            }
            else{
                a[j+1]+=a[j];
            ans++;
            }
        }
    }

    // for(int i=0;i<n;i++)cout<<a[i]<<' ';
    cout<<ans;

    return 0;
}