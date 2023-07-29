#include <iostream>
#include <cmath>

using namespace std;

int t,n;

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        int a=0;
        while(n){
            int l = abs((1-sqrt(1+(8*n)))/2);
            // cout<<l<<endl;
            for(int i=0;i<l;i++)cout<<(char)('a'+a);
            a++;
            n-=((l*(l+1))/2);
        }
        cout<<endl;

    }

    return 0;
}