#include <iostream>

using namespace std;
const int N=1e5+5;

long long int a[N],n,ans,c;


int main(){
    cin>>n;
    ans =2;
    c=2;
    if(n<=2){
        cout<<n;
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=2;i<n;i++){
        if(a[i]==a[i-1]+a[i-2] ){
            c++;
        }
        else{
            ans = max(ans,c);
            c=2;
        }
    }
    cout<<max(ans,c);
}
