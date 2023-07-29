#include <iostream>
#define ull unsigned long long

using namespace std;

int t;
ull x,y,z,w;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z>>w;
        ull ans=0;
        if(x>0)
            {
            ans=x;
            ans+=((2*min(y,z)));
            ans+=(min(x+1,max(z,y)+w));}
        else
            ans=1;
        cout<<min(ans,x+y+z+w)<<endl;
    }
}