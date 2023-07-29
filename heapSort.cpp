#include <iostream>

using namespace std;

void createMaxHeap(int a[],int n)
{
    for(int i=0;(i*2)+2<n;i++)
    {
        int firstChild=(i*2)+1;
        int secondChild=(i*2)+2;
        if(a[i]<a[firstChild])
        {
            int tmp=a[i];
            a[i]=a[firstChild];
            a[firstChild]=tmp;
        }
        if(a[i]<a[secondChild])
        {
            int tmp=a[i];
            a[i]=a[secondChild];
            a[secondChild]=tmp;
        }
    }
}

int main()
{
    int a[8]={124,23545,135,236,5367,357,34};
    createMaxHeap(a,7);
    for(int i=0,j=7;i<7;i++,j--)
    {
        int tmp=a[0];
        a[0]=a[j-1];
        a[j-1]=tmp;
        createMaxHeap(a,j-1);
    }
    for(int i=0;i<7;i++)
        cout<<a[i]<<' ';
}