#include <iostream>
#include <vector>
#include <queue>

using namespace std;
const int N=8e2+8,M=1e7+5;

char mat[N][N];
bool p[M],vis[N][N];
long long int n,ans=0;
vector<long long int> primes;


void sieve() {
  fill(p, p + M, true);
  p[0] = p[1] = false;

  for (int i = 2; i * i < M; i++) {
    if (p[i]) {
      for (int m = 2 * i; m < M; m += i) {
        p[m] = false;
      }
    }
  }
  primes.push_back(1);
  for(int i=0;i<M;i++){
    if(p[i])primes.push_back(i);
  }
}

bool valid(int x,int y){return (x>=0 && x<n && y>=0 && y<n);}

void flood(int x,int y){
    queue< pair<int,int> > q;
    q.push(make_pair(x,y));
    int dx[]={0,0,1,-1,1,1,-1,-1};
    int dy[]={1,-1,0,0,1,-1,1,-1};
    int poi=0;
    while(!q.empty()){
        int tmpx=q.front().first, tmpy=q.front().second;
        q.pop();
        if(vis[tmpx][tmpy])continue;
        vis[tmpx][tmpy]=1;
        ans+=primes[poi];
        poi++;
        for(int i=0;i<8;i++){
            int new_x = tmpx+dx[i], new_y = tmpy+dy[i];
            if(!vis[new_x][new_y] && valid(new_x, new_y) && mat[new_x][new_y]=='.'){
                q.push(make_pair(new_x, new_y));
            }
        }

    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>mat[i][j];
    }
    sieve();
    // cout<<primes.size()<<endl;
    memset(vis,0,sizeof vis);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!vis[i][j] && mat[i][j]=='.')flood(i,j);
        }
    }
    cout<<ans;
    return 0;
}