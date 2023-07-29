#include <iostream>

using namespace std;


long long int a,b;
long long int fac(long long int x){
    long long int ans=1;
    for(long long int i=x;i>=2;i--)ans*=i;
    return ans;
}

int main(){
    cin>>a>>b;
    cout<<fac(a)/(fac(a-b)*fac(b))<<' '<<fac(a)/fac(a-b);
}