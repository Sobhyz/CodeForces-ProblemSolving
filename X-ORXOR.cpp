#include <iostream>
#define ll long long int

using namespace std;

ll a,b,t;

int main(){
    cin>>t;
    while(t--){
        ll c=0,base=2,p=1;
        cin>>a>>b;
        while(a || b){
            int bita=a%2,bitb=b%2;
            // cout<<a<<' '<<b<<endl;
            if(bita==1 && bitb==0){
                c+=(p*1);
            }
            else if(bita==bitb){
                c+=0;
            }
            else{
                c=-1;
                break;
            }
            p*=base;
            b/=2;
            a/=2;
        }
        cout<<c<<endl;
    }
}