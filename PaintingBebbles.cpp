#include <iostream>
#include <cmath>

using namespace std;

int n,k,a[103],solvable=1,mx=0,mn=103;

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    if(mx-mn>k){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=1;j<=a[i];j++)cout<<(j%k)+1<<' ';
        cout<<endl;
    }
}