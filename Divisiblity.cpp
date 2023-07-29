#include <iostream>

using namespace std;

long long int a,b,x,l,r;

int main(){
    cin>>a>>b>>x;
    l=min(a,b);
    r=max(a,b);
    l--;
    l/=x;
    r/=x;
    cout<<(((r*(r+1)/2))*x)-(((l*(l+1)/2))*x);

}