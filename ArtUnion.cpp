#include <iostream>

using namespace std;
const int N=5e4+5;

int mat[N][7],m,n,ans[N];


int main(){
    cin>>m>>n;
    memset(ans,0,sizeof ans);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)cin>>mat[i][j];
    for(int i=0;i<n;i++){
        int st=0;
        for(int j=0;j<m;j++){
            int start = max(ans[j],st);
            ans[j] = start + mat[j][i];
            st=ans[j];
        }
    }
    for(int i=0;i<m;i++)cout<<ans[i]<<' ';

    return 0;
}