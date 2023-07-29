#include <iostream>
#include <cstring>
#include <vector>
#define pb push_back

using namespace std;
const int N=1e6+6;
char str[N],pat[N];
int f[N];

int newl(int l,char c)
{
    while(l && pat[l]!=c)l=f[l-1];
    return l+=(c==pat[l]);
}

void cf()
{
    memset(f,0,sizeof f);
    for(int i=1;pat[i];i++)
        f[i]=newl(f[i-1],pat[i]);
}

vector<int> matches(){
    cf();
    vector<int> ans;
    int l=0;
    for(int i=0;str[i];i++)
    {
        l=newl(l,str[i]);
        if(!pat[l])
            {ans.pb(i-l+1);}
    }
    return ans;
}

int main()
{
    scanf(" %s %s",str,pat);
    vector<int> ans=matches();
    cout<<ans.size();

}