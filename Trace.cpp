#include <bits/stdc++.h>

using namespace std;

int n,a[1003];
double ans1=0,ans2=0, pi =3.1415926536;

int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i-=2){
        if(!i)ans2 += (pi * a[0]*a[0]);
        else ans2+=((a[i]*a[i]-a[i-1]*a[i-1])*pi);
    }
    printf("%4f",ans2);
}