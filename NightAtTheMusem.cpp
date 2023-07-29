#include <iostream>

using namespace std;

int ans=0;
string s;

int main()
{
    cin>>s;
    char curr='a';
    for(int i=0;s[i];i++)
    {
        ans+=min(abs(s[i]-curr),26-abs(s[i]-curr));
        curr=s[i];
    }
    cout<<ans;
}