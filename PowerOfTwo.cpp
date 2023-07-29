#include <iostream>
#include <cmath>

using namespace std;

long long int n;
double m;

int main(){
    cin>>n;
    m=log2(n);
    n=m;
    (n==m) ? cout<<"YES" : cout<<"NO";
}