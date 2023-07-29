#include <iostream>
#define ll long long int


using namespace std;
ll n,m;

int main(){
    cin>>n>>m;
    ll mx = n-(m-1),rem=n%m,div=n/m;
    cout<<((div*(div+1))/2)*rem + ((div*(div-1))/2)*(m-rem)<<' '<<(mx*(mx-1))/2;
}