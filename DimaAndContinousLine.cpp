#include <iostream>

using namespace std;
const int N=1e3+3;

int a[N],n;

int main(){
    cin>>n;
    
    for(int i=0;i<n;i++)cin>>a[i];
    int curr,mn,mx;
    for(int i=2;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i-1]>min(a[j],a[j+1]) && a[i-1]<max(a[j],a[j+1]) && (a[i]>max(a[j],a[j+1]) || a[i]<min(a[j],a[j+1])) ||
            a[i]>min(a[j],a[j+1]) && a[i]<max(a[j],a[j+1]) && (a[i-1]>max(a[j],a[j+1]) || a[i-1]<min(a[j],a[j+1])) )
            {
                cout<<"yes";
                return 0;
            }
        }
    }
    cout<<"no";
}