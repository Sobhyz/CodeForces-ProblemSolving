#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,t;

int main(){
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        ll tmp = c&1;
        if(a>b || (a==b && tmp)){
            cout<<"First"<<endl;
        }
        else cout<<"Second"<<endl;
    }
}