#include <iostream>

using namespace std;
int n,a[103];
int main(){
    cin>>n;
    int ans=0,idx=0,diff[103];
    cin>>a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        diff[i] = a[i]-a[i-1];
        ans = max(ans, diff[i]);
    }
    int an = 1e9;
    for(int i=2;i<n;i++){
        an = max(min(an, diff[i]+diff[i-1]), ans);
    }
    cout<<an;
}