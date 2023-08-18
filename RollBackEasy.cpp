#include <bits/stdc++.h>

using namespace std;
const int N=1e6+6;

vector<int> curr,an(N);
stack<char> ins;
stack<int> insVal;
vector<int> freq(N);
int q,x,ans=0,preans=0,r=0;
char c;

int main(){
    cin>>q;
    while(q--){
        cin>>c;
        if(c=='+'){
            cin>>x;
            ans=an[r];
            ans+=(!freq[x]);
            an[r]=ans;
            r++;
            freq[x]++;
            ins.push('+');
            insVal.push(x);
        }
        else if(c=='-'){
            cin>>x;
            ins.push('-');
            insVal.push(x);
            r-=x;
        }
        else if(c=='!'){
            if(ins.top()=='+'){
                r--;
                ins.pop();
                insVal.pop();
            }
            else{
                r+=insVal.top();
                ins.pop();
                insVal.pop();
            }
        }
        else if(c=='?'){
            // cout<<r-1<<' ';
            cout<<an[r-1]<<endl;
        }
        // cout<<r<<endl;
    }
}
