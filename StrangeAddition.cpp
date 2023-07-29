#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int n,num[103];
vector<int> ans,a[4];


int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        // if(!num[i]){ans.push_back(num[i]);num[i]=-1;continue;}
        int tmp=num[i];
        int c=0;
        while(tmp){
            if(!(tmp%10)){
                c+=1;
            }
            tmp/=10;
        }
        if(num[i]==0){
            a[1].push_back(0);
            continue;
        }
        a[c].push_back(num[i]);
    }
    for(int i=0; i < 3 ; i++){
        sort(a[i].begin(),a[i].end());
    }
    int sum=0;
    if(a[2].size()){
        sum+=a[2][0];
        ans.push_back(a[2][0]);
    }
    // if(ans.size()==0){
    //     ans.push_back(num[0]);
    // }
    for(int i=0;i<a[1].size();i++){
        if((int)(log10(a[1][i]))<=1 && (sum==0 || sum%100==0)){
            sum+=a[1][i];
            ans.push_back(a[1][i]);
        }
    }
    for(int i=0;i<a[0].size();i++){
        // cout<<(int)(log10(a[0][i]))<<' ';
        if((int)(log10(a[0][i]))<=0 && (sum==0 || (sum%10==0))){
            sum+=a[0][i];
            ans.push_back(a[0][i]);
        }
        else if((int)(log10(a[0][i]))<=1 && (sum==0 || (sum%10==0 && sum%100==0))){
            sum+=a[0][i];
            ans.push_back(a[0][i]);
        }
    }
    // cout<<endl;
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}