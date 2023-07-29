#include <iostream>
#include <cmath>

using namespace std;

double n,t,k,d;

int main()
{
    cin>>n>>t>>k>>d;
    if(n<=k)
    {
        cout<<"NO";
        return 0;
    }
    if((ceil(n/k)*t)>(d+t))
        cout<<"YES";
    else
        cout<<"NO";
}