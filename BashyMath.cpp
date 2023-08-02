#include <iostream>

using namespace std;
const int N=5e5+10;

int a[N],freq[N],n;
long long int ans=0;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];freq[a[i]]++;}
    memset(freq,0,sizeof freq);
    for(int i=0;i<n;i++){
        for(int j=1;j*j<=a[i];j++){
            if(j%a[i]==0){
                cout<<j<<' '<<a[i]/j<<end;
                if(a[i]/j==j)ans+=(freq[j]);
                else ans+=freq[a[i]/j]+freq[j];
            }
        }
        ans+=(freq[a[i]]-1);
        // cout<<ans<<e÷ndl;
    }
    cout<<ans;
}