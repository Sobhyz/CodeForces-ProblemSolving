#include <iostream>

using namespace std;

int a[26],ans=0,b[26];
string s1,s2;

int main(){
    cin>>s1>>s2;
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);
    for(int i=0;s1[i];i++)a[s1[i]-'a']++;
    for(int i=0;s2[i];i++)b[s2[i]-'a']++;
    for(int i=0;i<26;i++){
        if(b[i]){
            if(!a[i]){
                cout<<-1;
                return 0;
            }
            ans+=min(a[i],b[i]);
        }
    }
    cout<<ans;
}