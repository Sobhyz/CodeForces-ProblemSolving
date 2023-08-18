#include <bits/stdc++.h>

using namespace std;

long long int n,m,q;

int main(){
    cin>>n;
    while(n--){
        cin>>m>>q;

        long long int c=0,ans=2,n=m;
        if(q<=(m+1)/2){
            cout<<(2*q)%n<<endl;
            continue;
        }
        while(q>((n+1)/2) && n>1){
            q-=((n+1)/2);
            n=(n>>1);
            c++;
        }
        while(c--){
            cout<<n<<' '<<q<<endl;
            if(n&1) q = (2*q)%n+1;
            else q = (2*q)%n-1;
            n=(n<<1);
        }
        if(n&1) cout<<(long long int)((2*q) + 1)<<endl;
        else cout<<(2*q) -1<<endl;
        // cout<<q%m<<endl;
    }
}