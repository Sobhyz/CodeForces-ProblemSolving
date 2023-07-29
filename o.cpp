#include <iostream>
#include <cstring>

using namespace std;

string s,t;
int test,n;

int main(){
    cin>>test;
    while(test--){
        cin>>n>>s>>t;
        int x=0;
        for(int i=0;t[i] && !x;i++)x=(t[i]=='o');
        (x || s==t) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}