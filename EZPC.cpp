#include <iostream>
#include <cstring>

using namespace std;

int t;
string str;

int main(){
    cin>>t;
    while(t--){
        cin>>str;
        int e,c,z,p;
        e=c=z=p=0;
        for(int i=0;str[i];i++){
            if(p && !z)e=c=z=p=0;
            if(c && (!e || !z || !p))e=c=z=p=0;
            if(e && c && z && p)break;
            if(str[i]=='e')e=1;
            if(str[i]=='z')z=1;
            if(str[i]=='p')p=1;
            if(str[i]=='c')c=1;
        }
        if(e && c && z && p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}