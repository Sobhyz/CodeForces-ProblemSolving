#include <iostream>

using namespace std;

int idxx,idxy,x,y,dumm;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>dumm;
            if(dumm)
                {idxx=i+1,idxy=j+1;}
        }
    }
    cout<<abs(idxx-3)+abs(idxy-3);
}