#include <iostream>
#include <queue>
#define f first
#define s second

using namespace std;

const int N=2e3+2;
int n,m,k;
int cinema[N][N];
pair<int,int> a[N];
int dx[]={-1,0,0,1,-1,-1,1,1};
int dy[]={0,-1,1,0,-1,1,-1,1};

bool valid(int x, int y){
    return (x>0 && x<=n && y>0 && y<=m);
}

void solve(){
    memset(cinema, 0, sizeof cinema);
    
    
    for(int i=0;i<k;i++){
        if(!cinema[a[i].f][a[i].s]){
            cinema[a[i].f][a[i].s]=1;
            cout<<a[i].f<<' '<<a[i].s<<endl;
            continue;
        }
        queue<pair<int,int>> q;
        q.push(a[i]);
        int x=a[i].f,y=a[i].s;
        while(cinema[x][y]){
            pair<int,int> tmp = q.front();
            q.pop();
            x=tmp.f;
            y=tmp.s;
            for(int j=0;j<8;j++){
                int new_x = x+dx[j];
                int new_y = y+dy[j];
                if(valid(new_x,new_y)){
                    q.push({new_x,new_y});
                }
            }
        }
        cinema[x][y]=1;
        cout<<x<<' '<<y<<endl;
    }
}
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<k;i++){
        cin>>a[i].f>>a[i].s;
    }
    solve();
}