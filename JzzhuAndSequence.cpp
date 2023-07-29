#include <iostream>

using namespace std;
const int mod = 1000000007;
long long int a[6],x,y,n,m=6;

int main(){
    cin>>x>>y>>n;
    a[0]=x;
    a[1]=y;
    a[2]=y-x;
    a[3] = -x;
    a[4] = -y;
    a[5] = x-y;
    n--;
    n%=6;

    double div = (double)a[n]/mod;
    long long int tmp=div;
    cout<<(a[n]%mod+mod)%mod;
}