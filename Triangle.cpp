#include <iostream>
#include <cmath>

using namespace std;
long long int x[3],y[3];

int main(){
    for(int i=0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    long long int n[3];
    for(int i=0;i<3;i++){
        n[i] = (pow(x[i]-x[(i+1)%3],2)) + (pow(y[i]-y[(i+1)%3],2));
        // cout<<n[i]<<endl;
    }
    if((n[0]+n[1]==n[2] || n[1]+n[2] == n[0] || n[0]+n[2]==n[1]) && n[0] && n[1] && n[2]){
        cout<<"RIGHT";
        return 0;
    }
    int dx[] = {0,1,0,-1}, dy[]={1,0,-1,0};
    for(int curr=0;curr<3;curr++){
        for(int i=0;i<4;i++){
            int curr_x = x[curr];
            int curr_y = y[curr];
            x[curr]+=(dx[i]);
            y[curr]+=(dy[i]);
            for(int j=0;j<3;j++){
                n[j] = (pow(x[j]-x[(j+1)%3],2)) + (pow(y[j]-y[(j+1)%3],2));
            }
            if((n[0]+n[1]==n[2] || n[1]+n[2] == n[0] || n[0]+n[2]==n[1]) && n[0] && n[1] && n[2]){
                // cerr<<n[0]<<' '<<n[1]<<' '<<n[2]<<endl;
                cout<<"ALMOST";
                return 0;
            }
            x[curr]=curr_x;
            y[curr]=curr_y;
        }
    }
    cout<<"NEITHER";
    return 0;
}