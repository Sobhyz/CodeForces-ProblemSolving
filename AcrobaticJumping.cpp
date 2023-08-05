#include <iostream>
#include <cmath>

using namespace std;

long long int n,l;

int main(){
    cin>>n;
    l = (-1 + sqrt(1 + 4*n))/2;
    // cout<<n-(l*(l+1))<<' '<<l<<endl;
    cout<<l*2 +(int)ceil((n-(l*(l+1)))/(double)(l+1));
}