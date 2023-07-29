#include <iostream>
#include <map>

using namespace std;

map<char,int> m;
string str;

int main(){
    cin>>str;
    m['>']=8;
    m['<']=9;
    m['+']=10;
    m['-']=11;
    m['.']=12;
    m[',']=13;
    m['[']=14;
    m[']']=15;
    int ans=0,mod=1000003;
    for(int i=0;str[i];i++){
        ans*=16;
        ans+=m[str[i]];
        ans%=mod;
    }
    cout<<ans;
}