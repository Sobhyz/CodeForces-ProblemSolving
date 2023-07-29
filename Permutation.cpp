#include <iostream>

using namespace std;

int n,k;

int main(){
    cin>>n>>k;
    int j=1;
    for(int i=1;i<=k;i++,j+=2){
        cout<<j+1<<' '<<j<<' ';
    }
    n*=2;
    for(;j<=n;j+=2)cout<<j<<' '<<j+1<<' ';
    return 0;
}