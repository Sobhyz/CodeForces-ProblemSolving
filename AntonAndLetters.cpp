#include <iostream>

using namespace std;

string s;

int main()
{
    getline(cin>>ws,s);
    int ans=0,a[27]={0};
    for(int i=0;s[i];i++)
    {
        ans+=(a[s[i]-'a']==0);
        a[s[i]-'a']=1;
    }
    cout<<ans;
}