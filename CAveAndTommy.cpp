#include <iostream>

using namespace std;

int main(void)
{
    int t,l,r,a=0,b=0,c=0,flag=0;
    long long int x;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        flag=0;
        cin>>x>>l>>r;
        for(int j=l; j<=r; j++)
        {
            flag=0;
            if(x%j==0)
            {
                a=j;
                flag=1;
                for(int k=a+1; k<=r;k++)
                {
                    flag=1;
                    if(x%k==0)
                    {
                        b=k;
                        flag++;
                        if(x%(a*b)==0 )
                        {
                            if(x/(a*b)>b && x/(a*b)>a && x/(a*b)<=r && x/(a*b)>l)
                            {
                               c=x/(a*b);
                               cout<<a<<" "<<b<<" "<<c<<endl;
                               flag=3;
                            }

                        }

                    }
                    if(flag==3)
                    {
                        break;
                    }
                }
            }
            if(flag==3)
            {
                break;
            }
        }
        if(flag!=3)
        {
            cout<<"-1"<<endl;
        }
    }
}