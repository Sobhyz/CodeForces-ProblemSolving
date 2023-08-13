#include <iostream>
#include <vector>

using namespace std;

long long int t,n;
vector<long long int> a,b,c;

int main(){
    cin>>t;
    while(t--){
        a.clear();
        b.clear();
        c.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long int mx=*max_element(a.begin(),a.end());
        for(int i=0;i<n;i++){
            long long int tmp=a[i],x=2;
            while(tmp<mx && a[i]){
                // cout<<tmp<<endl;
                for(int j=0;j<n;j++){
                    if(a[j]==tmp){
                        b.push_back(a[j]);
                        a[j]=0;
                    }
                }
                tmp=a[i]*x;
                x++;
            }
            
        }
        for(int i=0;i<n;i++)if(a[i])c.push_back(a[i]);
        if(!b.size() || !c.size()){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++)cout<<b[i]<<' ';
            cout<<endl;
            for(int i=0;i<c.size();i++)cout<<c[i]<<' ';
            cout<<endl;
        }
    }
}