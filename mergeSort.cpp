#include <iostream>

using namespace std;

void merge(int a[],int l,int r,int m)
{
    int nl=(m-l)+1,nr=r-m,il,ir,im;
    int left[nl],right[nr];
    for(int i=0;i<nl;i++)
        left[i]=a[i+l];
    for(int i=0;i<nr;i++)
        right[i]=a[i+m+1];
    il=ir=0;
    im=l;
    while(il<nl && ir<nr)
    {
        if(left[il]<=right[ir])
        {
            a[im]=left[il];
            il++;
        }
        else{
            a[im]=right[ir];
            ir++;
        }
        im++;
    }
    while(il<nl)
        {a[im]=left[il];il++;im++;}
    while(ir<nr)
        {a[im]=right[ir];ir++;im++;}

}

void MergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        MergeSort(a,l,mid);
        MergeSort(a,mid+1,r);
        merge(a,l,r,mid);
;    }
}

int main()
{
    int arr[5]={412,142,5,523,5};
    MergeSort(arr,0,4);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<' ';
}