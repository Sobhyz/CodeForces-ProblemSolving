#include <iostream>
#include <cstring>

using namespace std;

char c;
string s;

int main()
{
    cin>>c>>s;
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    int shift = (c=='R' ? -1 : 1);
    for(int i=0;s[i];i++)
    {
        for(int j=0;key[j];j++)
        {
            if(s[i]==key[j])
            {
                cout<<key[j+shift];
                break;
            }
        }
    }
}