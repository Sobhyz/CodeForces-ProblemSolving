#include <iostream>

using namespace std;
const int N=1e5+5;

int x[N],y[N],freq_x[N],n;

int main(){
    memset(freq_x, 0, sizeof freq_x);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        freq_x[x[i]]++;
    }
    int sum=  n-1;
    // cout<<sum<<endl;
    for(int i=0;i<n;i++){
        cout<<sum+freq_x[y[i]]<<' '<<sum-freq_x[y[i]]<<endl;
    }
}