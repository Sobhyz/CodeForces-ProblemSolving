#include <iostream>
#include <cmath>

using namespace std;

long long int ans=0,x=0,y,n;

int main(){
    cin>>n;
    while (n--)
    {
        cin>>y;
        ans+=abs(x-y)+1;
        if(x)
            ans++;
        x=y;
    }
    cout<<ans;
}