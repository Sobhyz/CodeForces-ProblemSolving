//// LIMITING SUM OF GEOMETRIC PROGRESESSION (a + a*(r^1) + a* ( r^2) ......) to infinity equals (a/1-r)

#include <iostream>

using namespace std;

int main(){
    double a,b,c,d,p,r;
    cin>>a>>b>>c>>d;
    p=a/b;
    r=c/d;
    r=(1-p)*(1-r);
    printf("%6f",p/(1-r));
}