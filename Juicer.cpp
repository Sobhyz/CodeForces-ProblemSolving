#include <iostream>

using namespace std;

int a,b,d,sum=0,x;

int main()
{
    cin>>a>>b>>d;
    int ans=0;
    for(int i=0;i<a;i++)
    {
        cin>>x;
        if(x>b)
            continue;
        sum+=x;
        if(sum>d)
        {
            sum=0;
            ans++;
        }
    }
    cout<<ans;
}