#include <iostream>

using namespace std;

long long int d,n,ans,x,p;

int main(){
    cin>>d>>n>>x;
    p=x;
    for(int i=1;i<n;i++){
        cin>>x;
        if(d>p){
            ans+=(d-p);
        }
        p=x;
    }
    cout<<ans;
}