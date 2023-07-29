#include <iostream>
#include <vector>

using namespace std;
const int N=1e6+6;
int n;

int main(){
    cin>>n;
    cout<<n<<' ';
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            n/=i;
            cout<<n<<' ';
        }
    }
    if(n>1)
        cout<<1<<endl;
}
