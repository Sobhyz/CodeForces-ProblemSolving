#include <iostream>
#include <cmath>

using namespace std;

long long int r,x1,y11,x2,y2;

int main(){
    cin>>r>>x1>>y11>>x2>>y2;
    double tmp = sqrt(pow((x1-x2),2) + pow((y11-y2),2));
    long long int len = sqrt(pow((x1-x2),2) + pow((y11-y2),2));
    r*=2;
    // cout<<(len/r)/2<<endl;
    if(!len){
        cout<<0;
        return 0;
    }
    cout<<((len/r))+(len%r!=0 || len!=tmp);
}