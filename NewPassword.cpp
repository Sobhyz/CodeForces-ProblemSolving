#include <iostream>
#include <algorithm>

using namespace std;

int n,k;

int main()
{
    cin>>n>>k;
    int c=0;
    for(int i=0;i<n;i++)
    {
        c=c%k;
        cout<<char(c+'a');
        c++;
    }
    return 0;
}
