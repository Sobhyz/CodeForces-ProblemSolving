#include <iostream>

using namespace std;
const int N=5e5+5;

int n,m,freqa[N],freqb[N],freqc[N],x;
long long int ans=0;

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){cin>>x;freqa[x]++;}
    for(int i=0;i<n;i++){cin>>x;freqb[x]++;}
    for(int i=0;i<n;i++){cin>>x;freqc[x]++;}
    for(int i=1;i*i<m;i++){
        if(m%i==0){
            int num=m/i;
            for(int j=i;j*j<=num;j++){
                if(num%j==0){
                    int tmp=num/j;
                    ans+=((freqa[i]*freqb[j]*freqc[tmp]) + (freqc[i]*freqa[j]*freqb[tmp]) + (freqb[i]*freqc[j]*freqa[tmp]));
                }
            }
        }
    }
    cout<<ans;
}