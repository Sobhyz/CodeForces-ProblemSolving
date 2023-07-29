#include <iostream>
#define isOn(n,k) ((n>>k)&1)

using namespace std;
int c=0,c1=0;

void fun(int x,int n)
{
    if(x==-1)
        return;
    fun(x-1,n);
    for(int i=n-1;i>=0;i--)
    {
        c++;
        if(isOn(x,i))
            cout<<'1';
        else
            cout<<'0';
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    fun((1<<n)-1,n);
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            c1++;
            if(isOn(i,j))
                cout<<'1';
            else
                cout<<'0';
        }
        cout<<endl;
    }
    cout<<c<<' '<<c1<<endl;
}