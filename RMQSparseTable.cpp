#include <bits/stdc++.h>

using namespace std;
const int N=2e5+5,M=25;

int sparseTable[N][M],n,q,l,r;

int main(){
    cin>>n>>q;
    for(int i=0;i<n;i++)cin>>sparseTable[i][0];
    int t = log2(n)+1;
    for(int i=1;i<t;i++){
        for(int j=0;j+(1<<i)-1<n;j++){
            sparseTable[j][i]=min(sparseTable[j][i-1],sparseTable[j+(1<<(i-1))][i-1]);
        }
    }
    while(q--){
        cin>>l>>r;
        int tt = r-l+1;
        t=log2(tt);
        cout<<min(sparseTable[l-1][t],sparseTable[r-(1<<t)][t])<<endl;
    }
}