#include <bits/stdc++.h>

using namespace std;

string s1,s2;

char lower(char c)
{
    return (c>='A' && c<='Z' ? ('a'-'A')+c : c);
}

int main()
{
    cin>>s1>>s2;
    for(int i=0;s1[i];i++)
        {s1[i]=lower(s1[i]);s2[i]=lower(s2[i]);}
    s1==s2 ? cout<<0 : (s2>s1 ? cout<<1 : cout<<-1);
}