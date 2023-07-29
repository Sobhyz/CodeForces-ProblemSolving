#include <iostream>

using namespace std;

long long int a,b,c,n;

int main(){
    cin>>a>>b>>n;
    c=(a^b);
    if(n%3==0)cout<<c;
    else if(n%3==1)cout<<a;
    else cout<<b;
}