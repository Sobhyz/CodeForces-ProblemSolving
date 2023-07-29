#include <iostream>
#include <cstring>
#include <cmath>


using namespace std;
const int N=505;
int mem[N][N],a,b;

int solve(int h=a,int w=b)
{
    if(h==w || !w || !h)
        return 0;
    int &ret=mem[h][w];
    if(~ret)
        return ret;
    int op1,op2,div;
    op1=op2=0;
    div=ceil(w/2);
    if(!div)
        return 0;
    if(w)
        cerr<<w<<' '<<div<<endl;
    op1=solve(h,div)+solve(h,w-div)+1;
    div=ceil(h/2);
    if(!div)
        return 0;
    op2=solve(div,w)+solve(h-div,w)+1;
    return ret=min(op1,op2);
}

int main()
{
    cin>>a>>b;
    memset(mem,-1,sizeof mem);
    cout<<solve();
}