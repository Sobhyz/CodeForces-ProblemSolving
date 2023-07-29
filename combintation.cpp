#include <iostream>
#define f first
#define s second

using namespace std;
pair<int,int> a[1003];
int n;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].s>>a[i].f;
    }
    sort(a,a+n);
    int ans=0,c=1,i=n-1;
    while(c-- && i>=0){
        c+=a[i].f;
        ans+=a[i].s;
        i--;
    }
    cout<<ans;
}