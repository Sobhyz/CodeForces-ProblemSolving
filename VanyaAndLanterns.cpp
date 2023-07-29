#include <iostream>

using namespace std;
const int N=1e3+3;

long long int a[N],n,l;
double ans=0;

int main(){
    cin>>n>>l;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    ans = max(a[0],l-a[n-1]);
    for(int i = 0 ; i < n-1 ; i++){
        double tmp = (a[i+1] - a[i])/2.0;
        ans = max(ans,tmp);
    }
    printf("%9f",ans);
}