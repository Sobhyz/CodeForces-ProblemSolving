#include <iostream>

using namespace std;
const int N=1e5+5;

long long int t,n,a[N],k,ans;

int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        ans=0;
        for(int i=0;i<n;i++)cin>>a[i];
        long long int mn1=min(a[0],a[1]),mn2=max(a[0],a[1]);
        long long int curr=mn2-mn1,c=1;
        for(int i=1;i<n;i++){
            cout<<mn1<<' '<<mn2<<endl;
            if(max(mn1,a[i])-min(mn1,a[i])<curr){
                mn2=max(a[i],mn1);
                mn1=min(a[i],mn1);
                curr=mn2-mn1;
            }
            if(curr>=k)c++;
            else{
                // cout<<c<<' ';
                ans+=((c*(c-1))/2);
                mn1=min(a[i],a[i-1]);
                mn2=max(a[i],a[i-1]);
                curr=mn2-mn1;
                c=1+(curr>=k);
            }
            // cout<<curr<<' ';
        }
        cout<<mn1<<' '<<mn2<<endl;
        cout<<ans<<endl;
    }
}