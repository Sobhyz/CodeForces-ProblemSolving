#include <iostream>
using namespace std;
 
int a[1003],n;
int main() {
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=1,idx=0,c=1;
    for(int i=0;i<n;i++){
       int l=i-1,mn=a[i],r=i+1;
       while(l>=0 && a[l]<=mn){
        mn=min(mn,a[l]);
        l--;
       }
       mn=a[i];
       while(r<n && a[r]<=mn){
        mn=min(mn,a[r]);
        r++;
       }
    //    cout<<r<<' '<<l<<endl;
       ans=max(ans,r-l-1);
    }
    cout<<ans;
	return 0;
}