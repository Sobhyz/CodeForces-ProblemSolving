#include <iostream>
#include <cstring>
#define ll long long int

using namespace std;
const ll N=1e6+5,mod=1e9+7;
ll mem[N],n,arr[]={1,2,3,4,5,6};


int main()
{
    memset(mem,0,sizeof mem);
    cin>>n;
    mem[0]=1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(i-arr[j]>=0)
            {
                mem[i]+=mem[i-arr[j]];
                mem[i]%=mod;
            }
        }
    }
    cout<<mem[n]%mod;
}