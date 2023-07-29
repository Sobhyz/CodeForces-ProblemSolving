#include <iostream>

using namespace std;

int a[103][103],b[103][103],sum[103][103],n,m;

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!a[i][j]){
                int r=0,c=0;
                for(int x=0;x<n;x++){
                    b[x][j]=0;
                }
                for(int x=0;x<m;x++){
                    b[i][x]=0;
                }
            }
            else{
                if(b[i][j]!=0)
                    b[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++){
            int r=0,c=0;
            for(int j=0;j<m;j++)
                r+=(b[i][j]);
            for(int j=0;j<n;j++)
                c+=(b[j][x]);
            if((a[i][x] && !r && !c) || (!a[i][x] && (r || c)))
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<' ';
        }
        cout<<endl;
    }
}