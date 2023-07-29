#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int

using namespace std;
const int N=1e5+5;

ll n,a[N];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(!i)
        {
            cout<<abs(a[1]-a[0])<<' '<<abs(a[n-1]-a[0])<<endl;
            continue;
        }
        else if(i==n-1)
        {
            cout<<abs(a[n-1]-a[n-2])<<' '<<abs(a[n-1]-a[0])<<endl;
            continue;
        }
        cout<<min(abs(a[i]-a[i-1]),abs(a[i+1]-a[i]))<<' '<<max(abs(a[n-1]-a[i]),abs(a[i]-a[0]))<<endl;;
    }
}