#include <iostream>
#define ll long long int


/// UNSOLVED ///

using namespace std;

ll t,n,a[1003],k,tmp;

int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        tmp=k;
        int idx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=a[idx])idx=i;
        }
        ll ans=a[idx];
        for(int i=0;i<n;i++){
            tmp=k;
            long long int ans1=a[i];
            for(int j=i;j>0;j--){
                if((ans1-a[j-1])+1<=tmp && ans1>=a[j-1]){tmp-=((ans1-a[j-1])+1);ans1++;}
                else break;
            }
            ans=max(ans,ans1);
        }
        cout<<ans<<endl;
    }
}
