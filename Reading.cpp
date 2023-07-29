#include <iostream>
#define f first
#define s second

using namespace std;

int n,k;
pair<int,int> a[1003];

bool f(pair<int,int> const &x,pair<int,int> const &y){return x.s<y.s;}

int main(){
    freope("input.txt",'r',stdin);
    freopen("output.txt",'w',stdout);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i].f;
        a[i].s=i+1;
    }
    sort(a,a+n);
    cout<<a[n-k].f<<endl;
    sort(a+(n-k),a+n,f);
    for(int i=n-k;i<n;i++)cout<<a[i].s<<' ';
}