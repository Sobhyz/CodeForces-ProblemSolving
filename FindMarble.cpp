#include <iostream>

using namespace std;
const int N=1e5+5;

int a[N],n,s,e;

int main(){
    cin>>n>>s>>e;
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    if(s==e){
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(a[s-1]==e){
            cout<<ans+1;
            return 0;
        }
        ans++;
        s=a[s-1];
    }
    cout<<-1;
}
