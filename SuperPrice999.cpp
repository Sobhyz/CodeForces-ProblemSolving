#include <iostream>
#include <cmath>

using namespace std;

long long int p,d,n,tmp,ans=0;

int main(){
    cin>>p>>d;
    n=log10(d)+1;
    for(int i=0;i<n;i++){
        if(p%10==9){
            d/=10;
            ans+=(9*pow(10,i));
            continue;
        }
        
        if(d%10<=p%tmp && i!=n-1){
            ans+=(9*pow(10,i));
            p-=(((d%10)+1));
            d/=10;
            d--;
        }
        else{
            ans+=(9*pow(10,i));
            p-=(((d%10)+1)*tmp);
            d/=10;
        }
    }
    cout<<p;
}