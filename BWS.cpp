#include <iostream>
#include <map>

using namespace std;

long long int c,n,m,mx[1003],month,curr[1003];
map<int,long long int> ma;

int main(){
    cin>>c>>n>>m;
    for(int i=0;i<n;i++){cin>>mx[i];}

    for(int j=0;j<=54;j++){
        long long int t=0;
        for(int i=0;i<n;i++){
            if(!j){curr[i]=1;}
            else if(mx[i]*2 <= c){curr[i]=1;mx[i]*=2;}
            else curr[i]*=2;
            t+=curr[i];
        }
        ma[j]=t;
    }

    for(int i=0;i<m;i++){
        cin>>month;
        cout<<ma[month]<<endl;
    }
}