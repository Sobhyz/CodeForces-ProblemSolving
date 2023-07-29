#include <iostream>

using namespace std;

int a,b,r;

int main(){
    cin>>a>>b>>r;
    r*=2;
    if((a<r || b<r)){
        cout<<"Second";
        return 0;
    }
    cout<<"First";
}