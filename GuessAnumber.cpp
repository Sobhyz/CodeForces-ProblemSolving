#include <iostream>
#include <cstring>

using namespace std;

long long int x,tmp=-(1e9+1),n;

int main()
{
    cin>>n;
    string op;
    char ans;
    long long int l=-(1e9+1),r=(1e9+1);
    for(int i=0;i<n;i++){
        cin>>op>>x>>ans;
        if(ans == 'N') {
			if (op == ">=") op = "<";
			else if (op == "<") op = ">=";
			else if (op == "<=") op = ">";
			else op = "<=";
		}
        if(op==">"){
            l=max(l,x+1);
        }
        else if(op == ">="){
            l=max(l,x);
        }
        else if(op == "<"){
            r=min(x-1,r);
        }
        else if(op == "<="){
            r=min(x,r);
        }
    }
    // cout<<l<<' '<<r<<endl;
    if(l<=r)
        cout<<(int)(l+r)/2;
    else
        cout<<"Impossible";
}