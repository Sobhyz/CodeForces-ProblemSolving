#include <bits/stdc++.h>

using namespace std;

int n,x;

int factor(int a){
    int ans=1;
    for(int p=2;p*p<=a;p++){
        int c=0;
        while(a%p==0){
            a/=p;
            c++;
        }
        ans=((c+1)*ans);
    }
    if(a!=1)ans*=2;
    return ans;
}

int main(){
    cin>>n;
    while(n--){
        cin>>x;
        cout<<factor(x)<<endl;
    }
}