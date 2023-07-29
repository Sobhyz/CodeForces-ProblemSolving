#include <iostream>

using namespace std;

string s1,s2;

int main()
{
    cin>>s1>>s2;
    int ans=0;

    for(int i=0;s2[i] && s1[ans];i++)
    {
        if(s1[ans]==s2[i])
            ans++;
    }
    cout<<ans+1;
}