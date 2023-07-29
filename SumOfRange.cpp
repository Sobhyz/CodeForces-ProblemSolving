#include <iostream>

using namespace std;

long long int a,b,x,y,z;

int main(){
    cin>>a>>b;
    x=((max(a,b)*(max(a,b)+1))/2) - ((min(a,b)*(min(a,b)-1))/2);
    y=((max(a,b)/2)+(max(a,b)%2))*((max(a,b)/2)+(max(a,b)%2)) - ((min(a,b)/2))*((min(a,b)/2));
    cout<<x<<endl<<x-y<<endl<<y<<endl;
}