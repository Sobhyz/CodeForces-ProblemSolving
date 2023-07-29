#include <iostream>
#include <cstring>

using namespace std;

const int N=1e6+6;
char str[N];
int z[N];

void computeZ()
{
    int s=0,e=0;
    for(int i=1;str[i];i++)
    {
        if(i<=e)
        {
            z[i]=min(e-i+1,z[i-s]);
        }
        cerr<<z[i]<<' ';
        while(str[z[i]]==str[z[i]+i])z[i]++;
        if(i+z[i]-1>e)
        {
            s=i;
            e=i+z[i]-1;
        }
        cerr<<z[i]<<endl;
        
    }
    int n=strlen(str);
    for(int j=0;str[j];j++)
        if(j+z[j]==n)cout<<j<<' ';
    cout<<n;
}

int main()
{
    scanf(" %s",str);
    memset(z,0,sizeof z);
    computeZ();
}