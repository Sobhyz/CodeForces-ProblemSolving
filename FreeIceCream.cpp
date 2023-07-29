#include <iostream>
#define ll long long int

using namespace std;

ll n,x,d,dis=0;
char c;

int main()
{
    cin>>n>>x;

    while(n--)
    {
        cin>>c>>d;
        if(c=='+')
            x+=d;
        else{
            if(x>=d)
                x-=d;
            else
                dis++;
        }
    }
    cout<<x<<' '<<dis;
}