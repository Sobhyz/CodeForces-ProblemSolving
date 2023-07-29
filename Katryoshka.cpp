#include <iostream>

using namespace std;

long long int n,m,k,ans=0;


int main(){
    cin>>n>>m>>k;
    ans+=min(n,min(m,k));
    n-=ans;
    m-=ans;
    k-=ans;
    ans+=min(n/2,k);
    cout<<ans;

}