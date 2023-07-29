#include <iostream>
#include <map>

using namespace std;
const int N=1e5+5;

int a[N][3],n,m,x,ans[N];
map<int,int> ma;

int main(){
    cin>>n>>m;
    memset(a,0,sizeof a);
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){cin>>a[i][j];}
    }
    for(int i=0;i<m;i++){
        int f1,f2,f3;
        f1=f2=f3=0;
        for(int j=0;j<3;j++){
            f1 = (f1 || (ma[a[i][j]]==1));
            f2 = (f2 || (ma[a[i][j]]==2));
            f3 = (f3 || (ma[a[i][j]]==3));
        }
        for(int j=0;j<3;j++){
            if(!f1 && !ma[a[i][j]]){
                ans[a[i][j]]=1;
                ma[a[i][j]]=1;
                f1=1;
            }
            if(!f2 && !ma[a[i][j]]){
                ans[a[i][j]]=2;
                ma[a[i][j]]=2;
                f2=1;
            }
            if(!f3 && !ma[a[i][j]]){
                ans[a[i][j]]=3;
                ma[a[i][j]]=3;
                f3=1;
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<' ';
}