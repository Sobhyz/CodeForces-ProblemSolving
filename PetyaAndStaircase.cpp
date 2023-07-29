#include <iostream>

using namespace std;

int n,m,a[3004];

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    if(a[0]==1 || a[m-1]==n){
        cout<<"NO";
        return 0;
    }
    for(int i=2;i<m;i++){
        if(a[i-1]-a[i-2]==1 && a[i]-a[i-2]==2){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}