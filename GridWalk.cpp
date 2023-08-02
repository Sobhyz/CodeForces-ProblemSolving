#include <iostream>

using namespace std;

int n,m,x,k,u,v;
char mat[103][103],d;

bool valid(int a,int b){
    return (a>=0 && a<n && b>=0 && b<m);
}

int main(){
    cin>>n>>m>>x>>k;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>mat[i][j];
    for(int i=0;i<x;i++){
        cin>>u>>v>>d;
        u--;
        v--;
        if(d=='R'){
            int dd=1;
            for(int j=0;j<k;j++){
                if(mat[u][v+dd]=='#' || !valid(u,v+dd)){(dd==1)? dd=-1 : dd=1;}
                else{
                    v+=dd;
                }
            }
            if(dd==1)
                cout<<u+1<<' '<<v+1<<' '<<'R'<<endl;
            else
                cout<<u+1<<' '<<v+1<<' '<<'L'<<endl;
        }
        else if(d=='L'){
            int dd=-1;
            for(int j=0;j<k;j++){
                if(mat[u][v+dd]=='#' || !valid(u,v+dd)){(dd==1)? dd=-1 : dd=1;}
                else{
                    v+=dd;
                }
            }
            if(dd==1)
                cout<<u+1<<' '<<v+1<<' '<<'R'<<endl;
            else
                cout<<u+1<<' '<<v+1<<' '<<'L'<<endl;
        }
        else if(d=='D'){
            int dd=1;
            for(int j=0;j<k;j++){
                if(mat[u+dd][v]=='#' || !valid(u+dd,v)){(dd==1)? dd=-1 : dd=1;}
                else{
                    u+=dd;
                }
            }
            if(dd==1)
                cout<<u+1<<' '<<v+1<<' '<<'D'<<endl;
            else
                cout<<u+1<<' '<<v+1<<' '<<'U'<<endl;
        }
        else if(d=='U'){
            int dd=-1;
            for(int j=0;j<k;j++){
                if(mat[u+dd][v]=='#' || !valid(u+dd,v)){(dd==1)? dd=-1 : dd=1;}
                else{
                    u+=dd;
                }
            }
            if(dd==1)
                cout<<u+1<<' '<<v+1<<' '<<'D'<<endl;
            else
                cout<<u+1<<' '<<v+1<<' '<<'U'<<endl;
        }
    }

}