#include <iostream>
#include <cmath>
#define ll long long int

using namespace std;

int main()
{
    ll ans=0;
    ll x,i=0;
    cin>>x;
    while(x)
    {
        
        ll tmp=min((x%10),9-(x%10));
        if(x<=9){
            if(!tmp)
                tmp=x;
        }
        ans+=tmp*pow(10,i++);
        x/=10;
    }
    cout<<ans;
}