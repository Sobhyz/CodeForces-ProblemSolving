#include <iostream>
#include <cmath>

using namespace std;

long long int x;
int n,k;

int main(){
    cin>>n>>k;
    int ans = 0;
    while(n--){
        cin>>x;
        int dig_c = log10(x)+1;
        if(dig_c<=k){
            ans++;
            continue;
        }
        int c = 0;
        while(x){
            c+=(((x%10) == 4) || ((x%10) == 7));
            x/=10;
        }
        ans+=(c<=k);
    }
    cout<<ans;
    return 0;
}