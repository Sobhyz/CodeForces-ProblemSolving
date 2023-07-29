#include <iostream>
#include <queue>

using namespace std;
char mat[15][15];
int n,m;
int dx[]={1,0,0,1};
int dy[]={0,-1,1,0};
queue<pair<int,int>> q;

bool valid(int x,int y){
    return (x>=0 && x<n && y>=0 && y<m);
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='W')q.push(make_pair(i,j));
        }
    }
    int ans=0;
    while(!q.empty()){
        pair<int,int> tmp=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int new_x = tmp.first + dx[i];
            int new_y = tmp.second + dy[i];
            if(valid(new_x,new_y) && mat[new_x][new_y]=='P'){
                mat[new_x][new_y] = '.';
                ans++;
                break;
            }
        }
    }
    cout<<ans;
}