#include <iostream>

using namespace std;

void fun(int *x){
    cout<<*x;
}

int main(){
    int *p,var;
    var = 6;
    p = &var;
    int **d=&p;
    cout<<*d<<' '<<p;
    // sort(a,a+n);
    // *p=8;
    // fun(p);
}