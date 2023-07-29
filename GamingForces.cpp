#include <iostream>

using namespace std;

int t,n,x;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>x;
            ans+=(x==1);
        }
        cout<<n-(ans/2)<<endl;
    }
}