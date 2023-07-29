#include <iostream>
#include <algorithm>
#include <vector>
#define pb push_back

using namespace std;

vector<int> teams[5];
int n,x;

int main()
{
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        teams[x].pb(i);
    }
    n=min(teams[1].size(),min(teams[2].size(),teams[3].size()));
    cout<<n<<endl;

    for(int i=0;i<n;i++)
        cout<<teams[1][i]<<' '<<teams[2][i]<<' '<<teams[3][i]<<endl;
    return 0;
}