#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n=1024;
    string str="";
    while(n)
    {
        if(n%16>9)
        {
            char c=(char)('A'+((n%16)%10));
            str+=c;
        }
        else
        {
            str+=to_string((n%16));
        }
        n/=16;
    }
    reverse(str.begin(),str.end());
    cout<<str;
}