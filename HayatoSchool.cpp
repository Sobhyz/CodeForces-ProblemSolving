#include <iostream>
#include <vector>

using namespace  std;
int t,x,n;

int main()
{
    cin>>t;
    while(t--)
    {
        vector<int> o,e;
        cin>>n;
        int f=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x&1)
                o.push_back(i+1);
            else
                e.push_back(i+1);
            if(o.size()>2)
            {
                cout<<"YES"<<endl;
                cout<<o[0]<<' '<<o[1]<<' '<<o[2]<<endl;
                f=1;
            }
            if(e.size()>0 && o.size()>0)
            {
                if(e.size()>1)
                {
                    cout<<"YES"<<endl;
                    cout<<e[0]<<' '<<e[1]<<' '<<o[0]<<endl;
                    f=1;
                }

            }
        }
        if(!f)cout<<"NO"<<endl;

    }
}