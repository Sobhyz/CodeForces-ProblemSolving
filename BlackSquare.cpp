#include <iostream>

using namespace std;

int a[6];
string s;

int main()
{
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>s;
    int sum=0;
    for(int i=0;s[i];i++)
        {sum+=a[s[i]-'0'];}
    cout<<sum;
}