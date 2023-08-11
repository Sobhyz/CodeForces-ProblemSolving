#include <iostream>
#include <cmath>

using namespace std;

long double a,b,c,d;
long double ans=0;

int main(){
    cin>>a>>b>>c>>d;
    ans=sqrt(((c-a) * (c-a)) + ((d-b) * (d-b)));
    printf("%9Lf",ans);
}