#include <bits/stdc++.h>

using namespace std;

int a[26]={0},c=0;
string s;

int main()
{
    cin>>s;
    for(int i=0;s[i];i++)
    {
        int idx=s[i]-'a';
        c+=(!a[idx]);
        a[idx]=1;
    }
    (c&1) ? cout<<"IGNORE HIM!" : cout<<"CHAT WITH HER!";
}