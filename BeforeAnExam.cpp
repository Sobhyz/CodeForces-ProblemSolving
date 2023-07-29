#include <iostream>

using namespace std;

int minsum=0,maxsum=0,x[31],y[31],n,t;

int main(){
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        minsum+=x[i];
        maxsum+=y[i];
    }
    if(t<minsum || t>maxsum){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    int i=0;
    while(t!=minsum){
        // cout<<minsum<<' '<<t<<' '<<i<<endl;
        if(minsum+(y[i]-x[i])<=t){
            minsum+=(y[i]-x[i]);
            x[i]=y[i];
            i++;
            continue;
        }
        int tmp=t-minsum;
        minsum+=tmp;
        x[i]=x[i]+tmp;
        i++;
    }
    for(int j=0;j<n;j++)cout<<x[j]<<' ';
}