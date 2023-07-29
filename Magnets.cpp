#include <iostream>

using namespace std;

int n,ans=1;
string s,prv;

int main()
{
    cin>>n;
    cin>>prv;
    for(int i=1;i<n;i++)
    {
        cin>>s;
        if(prv[1]==s[0])
            ans++;
        prv=s;
    }
    cout<<ans;
    return 0;
}