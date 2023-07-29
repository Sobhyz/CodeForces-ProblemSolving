#include <iostream>

using namespace std;
const int N=1e5+5;

int n,k,x,a[N];

int main(){
    cin>>n>>k;
    memset(a,0,sizeof a);
    for(int i=0;i<n;i++){
        cin>>x;
        a[i%k]+=x;
    }

    int idx = 0;
    for(int i=0;i<n;i++){
        if(a[i]<a[idx] && a[i]!=0){
            idx=i;
        }
    }
    cout<<idx+1;
}