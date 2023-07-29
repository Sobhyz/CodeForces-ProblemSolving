#include <iostream>

using namespace std;

int n,b[103];
pair<int,int> a[103];

int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
    int ans=0;
    memset(b,0,sizeof b);
    for(int i=a[0].first;i<=a[0].second;i++){
        b[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=a[i].first;j<a[i].second;j++)
            b[j]=0;
    }
    for(int i=a[0].first;i<a[0].second;i++){
        if(i)
            b[i]+=b[i-1];
    }
    cout<<b[a[0].second-1];;
    return 0;
}
