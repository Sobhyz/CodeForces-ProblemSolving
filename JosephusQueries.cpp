#include <bits/stdc++.h>

using namespace std;

long long int n,m,q;

int main(){
    cin>>n;
    while(n--){
        cin>>m>>q;
        q*=2;
        cout<<q%m<<endl;
    }
}