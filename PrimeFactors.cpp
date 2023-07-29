#include <iostream>

using namespace std;

long long int n,p=2,c=0;

int main(){
    cin>>n;
    int f=1;
    while(n>1){
        c=0;
        while(n%p==0){
            c++;
            n/=p;
            f=(1 & f);
        }

        if(f && c){
            cout<<'('<<p<<'^'<<c<<')';
            f=0;
        }
        else if(c){
            cout<<'*'<<'('<<p<<'^'<<c<<')';
        }
        p+=(2-(p%2==0));
    }
}