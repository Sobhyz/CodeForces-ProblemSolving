#include <iostream>

using namespace std;

int n,x,ans=0;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
            {cin>>x;sum+=x;}
        ans+=(sum>=2);
    }
    cout<<ans;
}
