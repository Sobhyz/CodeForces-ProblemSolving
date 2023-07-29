#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int gifts[101];
int n;

int main()
{
    cin>>n;
    memset(gifts,0,sizeof gifts);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        gifts[x]=i;
    }
    for(int i=1;i<=n;i++)
        cout<<gifts[i]<<' ';
    return 0;
}