#include <iostream>
#include <map>
#include <set>

using namespace std;

map<double,int> m;
map< pair<int,int> ,int> s;
int n,x,y,tmpx,tmpy;

int main(){
    cin>>n>>x>>y;
    int h=0,v=0;
    while(n--){
        cin>>tmpx>>tmpy;
        if(tmpx==x){h++;continue;}

        double tmp=(double)(tmpy-y)/(tmpx-x);
        // cout<<tmp<<' ';
        m[tmp]=1;
    }
    // cout<<endl;
    cout<<m.size()+(h>0);
}