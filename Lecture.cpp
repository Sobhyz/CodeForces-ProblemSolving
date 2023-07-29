#include <iostream>
#include <map>

using namespace std;
map<string,string> ma;
string s1,s2;
int n,m;

int main(){
    cin>>n>>m;

    while(m--){
        cin>>s1>>s2;
        ma[s1]=s2;
    }
    while(n--){
        cin>>s1;
        s2 = ma[s1];
        if(s2.length() < s1.length())
            cout<<s2<<' ';
        else
            cout<<s1<<' ';
    }
}