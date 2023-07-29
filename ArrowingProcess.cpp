#include <iostream>

using namespace std;

char mat[1003][1003];
int n,m;


int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>mat[i][j];

    int ans=0;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(mat[i][j]=='>')c++;
            else if(mat[i][j]=='<')ans+=c;
            else c=0;
        }
    }
    for(int i=0;i<m;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(mat[j][i]=='v')c++;
            else if(mat[j][i]=='^')ans+=c;
            else c=0;
        }
    }
    cout<<ans;
}
///<>><