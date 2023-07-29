#include <iostream>
#include <cmath>

using namespace std;

long long int n;

int main(){
    cin>>n;
    n*=2;
    n=(-1+sqrt(1+(4*n)))/2;
    cout<<abs(n);
}
//n^2-n