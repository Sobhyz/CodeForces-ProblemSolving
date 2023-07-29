#include <iostream>

using namespace std;
const int N=1e5+5;
int n,l,r,a[N];



int main(){
    cin>>n;
    for(int i=0 ; i<n ; i++){cin>>a[i];}
    l=r=0;
    bool f=0;
    for(int i=0 ; i<n-1 ; i++){
        if(l==r && a[i]<=a[i+1]){
            l=r=i+1;
            continue;
        }
        if(a[i]>a[i+1]){
            if(!f)
                r=i+1;
            else{
                cout<<"no";
                return 0;
            }
        }
        if(a[i]<=a[i+1]){
            if(!f)
                f=1;
        }
    }
    if((a[max(l-1,0)]>a[min(r,n-1)] && l>0)  || (a[min(r+1,n-1)]<a[max(l,0)] && r<n-1)){
        cout<<"no";
        return 0;
    }

    cout<<"yes"<<endl<<l+1<<' '<<r+1;
    return 0;
}