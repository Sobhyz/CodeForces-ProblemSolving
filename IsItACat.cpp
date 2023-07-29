#include <iostream>
#include <set>

using namespace std;
int t;
string str;
int main()
{
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>str;
        for(int i=0;str[i];i++) str[i]=tolower(str[i]);
        str.erase(unique(str.begin(),str.end()),str.end());
        str=="meow" ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}