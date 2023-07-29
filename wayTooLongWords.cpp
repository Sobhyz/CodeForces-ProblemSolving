#include <iostream>

using namespace std;

int n;
string str;

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>str;
        int x=str.length();
        if(x<=10)
        {
            cout<<str<<endl;
            continue;
        }
        cout<<str[0]<<x-2<<str[x-1]<<endl;
    }
}