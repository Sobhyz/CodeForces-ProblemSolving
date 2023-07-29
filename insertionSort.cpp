#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(!i || a[i]>=a[i-1])
            continue;
        for(int j=i;j>0&&a[j]<a[j-1];j--)
        {
            int tmp=a[j];
            a[j]=a[j-1];
            a[j-1]=tmp; 
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
}