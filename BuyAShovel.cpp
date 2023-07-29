#include <iostream>

using namespace std;

int a,b;
int ans=1;

int main()
{
    cin>>a>>b;
    while((a*ans)%10!=0 && (a*ans)%10!=b)
        ans++;
    cout<<ans;

}