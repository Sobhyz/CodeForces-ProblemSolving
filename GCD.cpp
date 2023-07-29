#include <iostream>
#include <numeric>

using namespace std;
long long int a,b,g;

int main(){
    cin>>a>>b;
    g=__gcd(a,b);
    cout<<g<<' '<<((a*b)/g);
}