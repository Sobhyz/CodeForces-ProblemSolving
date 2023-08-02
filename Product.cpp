#include <iostream>

using namespace std;

long long int l,r,m,ans=1;

int main(){
    cin>>l>>r>>m;
    for(long long int i=l;i<=r;i++){ans*=i;ans%=m;}
    cout<<ans%m;
}

