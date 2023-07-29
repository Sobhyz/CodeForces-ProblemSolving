#include <iostream>

using namespace std;

int n,ans=0;
string s;

int main()
{
    cin>>n>>s;
    for(int i=0;i<n-1;i++)
        ans+=(s[i]==s[i+1]);
    cout<<ans;
}