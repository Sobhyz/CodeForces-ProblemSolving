#include <iostream>
#include <algorithm>

using namespace std;

string s;

int main()
{
    cin>>s;
    sort(s.begin(),s.end());

    for(int i=0;s[i];i++)
    {
        if(s[i]!='+')
        {
            cout<<s[i];
            if(s[i+1])
                cout<<'+';
        }
    }

    return 0;
}