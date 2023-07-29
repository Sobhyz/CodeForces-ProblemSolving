#include <iostream>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n==1){
        cout<<"NO";
        return 0;
    }
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}