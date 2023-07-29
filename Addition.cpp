#include <iostream>

using namespace std;
const int N=1e5+5;

long long int t,n,k,x;

int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long int mn=1e9+9,mx=0;
        for(int i=0;i<n;i++){
            cin>>x;
            mx=max(mx,x);
            mn=min(mn,x);
        }
        cout<<mx-mn<<endl;
    }
}