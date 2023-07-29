#include <iostream>

using namespace std;

int n,m;

int main()
{
    cin>>n>>m;
    n=7-max(n,m);
    if(n==1)
        cout<<1<<'/'<<6;
    else if(n==2)
        cout<<1<<'/'<<3;
    else if(n==3)
        cout<<1<<'/'<<2;
    else if(n==4)
        cout<<2<<'/'<<3;
    else if(n==5)
        cout<<5<<'/'<<6;
    else
        cout<<1<<'/'<<1;
}