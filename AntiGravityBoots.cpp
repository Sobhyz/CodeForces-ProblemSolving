#include <iostream>

using namespace std;
const int N=1e6+5;

pair<long long int,long long int> a[N];
int n,m;

int main(){
    cin>>n>>m;
    n+=m;
    for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
    sort(a,a+n);
    long long int pos=1;
    for(int i=0;i<n;i++){
        if(a[i].first<=pos){
            pos=max(pos,a[i].first+a[i].second-1);
        }
    }
    cout<<pos;
}
