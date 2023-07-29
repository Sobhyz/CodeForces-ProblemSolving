#include <iostream>

using namespace std;

int t,n,m;
string s1,s2;

int main(){
    cin>>t;
    while(t--){
        cin>>n>>m>>s1>>s2;
        reverse(s2.begin(),s2.end());
        s1+=s2;
        int x=0;
        
        for(int i=0;s1[i+1];i++){
            if((s1[i]==s1[i+1])){x++;}
            if(x==2){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(x<=1)cout<<"YES"<<endl;
    }
}