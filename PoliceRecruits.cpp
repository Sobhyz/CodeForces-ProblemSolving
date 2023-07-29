#include <iostream>

using namespace std;

const int N=1e5+5;
int x,n,p=0,cr=0;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)
            p==0 ? cr++ : p--;
        else
            p+=x;
    }
    cout<<cr;
}