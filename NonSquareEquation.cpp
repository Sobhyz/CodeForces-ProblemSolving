#include <iostream>
#include <cmath>
#define ll long long int

using namespace std;

ll n;

int main(){
    cin>>n;
    for(ll i=1;i<=90;i++){
        ll tmp = (-i+sqrt(i*i+4*n))/2;
        ll sum=0,t=tmp;
        while(t){sum+=t%10;t/=10;}
        cout<<i<<' '<<sum<<' '<<tmp<<endl;
        if(tmp*tmp+(sum*tmp)-n ==0){
            cout<<tmp;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}