#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N=1e6+6;
char str[N],ext[2*N];
int n,p[2*N];

void extend()
{
    n=strlen(str);
    for(int i=(2*n);i>=0;i-=2)
    {
        ext[i]='#';
        ext[i-1]=str[--n];
    }
    n=strlen(ext);
    ext[n-1]='^';
    ext[0]='$';
}

void manascher()
{
    extend();
    memset(p,0,sizeof p);
    for(int i=1,l=1,r=1;ext[i];i++)
    {
        p[i]=max(0,min(r-i,p[l+(r-i)]));
        while(ext[i-p[i]]==ext[i+p[i]])p[i]++;
        if(i+p[i]>r)
        {
            l=i-p[i];
            r=i+p[i];
        }
    }
}

int main()
{
    scanf(" %s",str);
    manascher();
    int idx=max_element(p,p+n)-p;
    int l=idx-p[idx],r=idx+p[idx];
    for(int i=l+1;i<r;i++)
        if(ext[i]!='#')
            cout<<ext[i];
}
