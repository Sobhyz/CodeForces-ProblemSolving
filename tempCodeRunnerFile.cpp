#include <iostream>
#include <cmath>

using namespace std;

long long int n,l;

int main(){
    cin>>n;
    l = (-1 + sqrt(1 + 8*n))/2;
    cout<<l+1;
}