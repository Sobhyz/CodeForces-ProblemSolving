#include <iostream>
#include <string>
#include <map>

using namespace std;

long long int k,sum=0,x,val=0;
map<char,long long int> m;
string str;

int main(){
    cin>>str>>k;
    char tmp = 'a';
    for(int i=0;i<26;i++)
    {
        cin>>x;
        m[tmp]=x;
        tmp+=1;
        val=max(val,x);
    }
    for(int i=0;str[i];i++){
        sum+=((i+1) * m[str[i]]);
    }

    int l=str.length();
    for(int i=0;i<k;i++)
    {
        sum+=((i+1+l)*val);
    }
    cout<<sum;
}