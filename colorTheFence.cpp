#include <iostream>

using namespace std;
const int N=1e6+5;

int n,b[10];


int main(){
    cin>>n;
    for(int i=1;i<=9;i++)cin>>b[i];
    int mn=*min_element(b+1,b+10),l=n/mn;
    if(!l){
        cout<<-1;
        return 0;
    }
    while(l--){
        for(int i=9;i>0;i--){
            if((n-b[i])/mn==l && n>=b[i]){
                cout<<i;
                n-=b[i];
                break;
            }
        }
    }
}
