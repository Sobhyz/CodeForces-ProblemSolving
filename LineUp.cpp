#include <iostream>

using namespace std;

int n,ans[1003],a[1003],freq[1003];

int main(){
    cin>>n;
    memset(freq,0,sizeof freq);
    for(int i=0;i<n;i++){cin>>a[i];}
    int mn=1003,mx=0;
    for(int i=0;i<n;i++){
        int f=0;
        // for(int j=i;j>=0;j--){
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        // }
        if(a[i]==mx && !freq[mx]){
            ans[i]=mx;
            freq[mx]=1;
            continue;
        }
        if(a[i]==mn && !freq[mn]){
            ans[i]=mn;
            freq[mn]=1;
            continue;
        }
        for(int j=mn;j<=mx;j++)
        {
            if(!freq[j]){ans[i]=j;freq[j]=1;f=1;break;}
        }
        if(!f){
            if(!freq[mx+1] && mx!=n && !freq[mn-1] && mn>1){
                if(mn==a[i]){
                    mx++;
                    ans[i]=mx;
                    freq[mx]=1;
                }
                else if(mx==a[i]){
                    ans[i]=mn-1;
                    freq[mn-1]=1;
                    mn--;
                }
            }
            else if(!freq[mx+1] && mx!=n){
                mx++;
                ans[i]=mx;
                freq[mx]=1;
            }
            else if(!freq[mn-1] && mn>1){
                ans[i]=mn-1;
                freq[mn-1]=1;
                mn--;
            }
        }
    }
    mn=1003;
    mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,ans[i]);
        mn=min(mn,ans[i]);
        // cout<<ans[i]<<' ';
        if(a[i]!=mx && a[i]!=mn){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}