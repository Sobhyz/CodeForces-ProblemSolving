#include <iostream>
#include <cmath>

using namespace std;
int x1,y1,x2,y2;

bool check(){
    return (abs(x2-x1) == abs(y2-y1) || (x1==x2) || (y1==y2));
}

int main()
{
    cin>>x1>>y1>>x2>>y2;
    if(!check)
    {
        cout<<-1;
        return 0;
    }
    int ans=0;
    if(x1!=x2)
        ans=abs(x2-x1);
    else if (y1!=y2)
        ans = abs(y2-y1);
    
    if(x1 == x2){
        cout<<x1+ans<<' '<<y1<<' '<<x1+ans<<' '<<y2;
    }
    else if(y1==y2){
        cout<<x1<<' '<<y1+ans<<' '<<x2<<' '<<y1+ans;
    }
    else{
        cout<<x2<<' '<<y1<<' '<<x1<<' '<<y2;
    }
}