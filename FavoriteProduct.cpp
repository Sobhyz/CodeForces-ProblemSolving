#include <iostream>

using namespace std;
const int N=1e5+5;

long long int n,k,a[N],x,freq[N];

long long int ncr(long long int a,long long int b){
    if(b==2)return (a*(a-1))/2;
    return (a*(a-1)*(a-2))/6;

}

int main(){
    cin>>n>>k;

    for(int i=0;i<n;i++){cin>>a[i];freq[a[i]]++;}
    long long int ans=0;

    sort(a,a+n);
    for(int i=1;i*i<=k;i++){
        if(k%i==0){
            long long int num=k/i;
            for(long long int j=i;j*j<=num;j++){
                if (num%j==0)
                {
                    if(i==j && i==num/j)ans+=ncr(freq[i],3);
                    else if(i==j)ans+=(ncr(freq[i],2)*freq[num/j]);
                    else if(i==num/j)ans+=(ncr(freq[i],2)*freq[j]);
                    else if(j==num/j)ans+=(ncr(freq[j],2)*freq[i]);
                    else ans+=(freq[i]*freq[num/j]*freq[j]);
                }
                
            }
        }
    }
    cout<<ans;
    
}