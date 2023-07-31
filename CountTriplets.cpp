#include <iostream>
#include <map>
#include <set>

using namespace std;
const int N=5e5+5;

long long int n,m,x;
map<long long int,long long int> freqa,freqb,freqc;
set<long long int > s;
long long int ans=0;

int main(){
    cin>>n>>m;
    for(long long int i=0;i<n;i++){cin>>x;freqa[x]++;}
    for(long long int i=0;i<n;i++){cin>>x;freqb[x]++;}
    for(long long int i=0;i<n;i++){cin>>x;freqc[x]++;}
    // cout<<endl;
    for(long long int i=1;i*i<=m;i++){
        if(m%i==0){
            s.insert(i);
            s.insert(m/i);
        }
    }
    set<long long int> :: iterator it = s.begin();
    for(;it!=s.end();it++){
        long long int i=*it;
        long long int num=m/i;
        for(long long int j=i;j*j<=num;j++){
            if(num%j==0){
                long long int tmp=num/j;
                if(i==j && i==tmp) ans+=(freqa[i] * freqb[i] * freqc[i]);
                else if(i==j){ans+=((freqa[i] * freqb[i] * freqc[tmp]) + (freqa[i] * freqb[tmp] * freqc[i]) + (freqa[tmp] * freqb[i] * freqc[i]));}
                else if(i==tmp){ans+=((freqa[i] * freqb[i] * freqc[j]) + (freqa[i] * freqb[j] * freqc[i]) + (freqa[j] * freqb[i] * freqc[i]));}
                else if(j==tmp){ans+=((freqa[tmp] * freqb[i] * freqc[tmp]) + (freqa[i] * freqb[tmp] * freqc[tmp]) + (freqa[tmp] * freqb[tmp] * freqc[i]));}
                else{ans+=((freqa[i]*freqb[j]*freqc[tmp]) + (freqa[i]*freqc[j]*freqb[tmp]) + (freqb[i]*freqc[j]*freqa[tmp]) 
                + (freqb[i]*freqa[j]*freqc[tmp]) + (freqc[i]*freqa[j]*freqb[tmp]) + (freqc[i]*freqb[j]*freqa[tmp]));}
            }
        }
    }
    cout<<ans;
}