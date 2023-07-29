#include <iostream>

using namespace std;

const int N=1e3+3;
int n,a[N],sum1,sum2;

int main()
{
    sum1=sum2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    int l=0,r=n-1,w=0;
    while(l<=r)
    {
        if(!w)
        {
            if(a[l]>a[r])
            {
                sum1+=a[l];
                l++;
            }
            else{
                sum1+=a[r];
                r--;
            }
        }
        else{
            if(a[l]>a[r])
            {
                sum2+=a[l];
                l++;
            }
            else{
                sum2+=a[r];
                r--;
            }
        }
        w^=1;
    }
    cout<<sum1<<' '<<sum2;
}