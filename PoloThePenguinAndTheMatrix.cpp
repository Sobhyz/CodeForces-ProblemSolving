#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
const int N=1e4+6;

int x,n,m,d,tmp=0;
vector<int> a;


int main(){
    cin>>n>>m>>d;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){cin>>x;a.push_back(x);}
    }
    sort(a.begin(),a.end());
    x=a[(a.size()/2)];
    for(int i=0;i<a.size();i++){
        if(abs(a[i]-x)%d==0){
            ans+=((abs(a[i]-x)/d));
        }
        else{
            cout<<-1;
            return 0;
        }
    }
    cout<<ans;
}