#include<bits/stdc++.h>
#include<ext/numeric>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
using namespace __gnu_cxx;
typedef long long ll;

const int MOD=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double EPS=1e-8;


const int N=1e6+6, M=1e3+5;

struct mul{
    int mod;
    int operator() (int a, int b){
        return a*1LL*b%mod;
    }
    mul(int _mod) : mod(_mod) {};
};

struct add{
    int mod;
    int operator() (int a, int b){
        return (a+b)%mod;
    }
    add(int _mod) : mod(_mod) {};
};


struct sub{
    int mod;
    int operator() (int a, int b){
        return (a+mod-b)%mod;
    }
    sub(int _mod) : mod(_mod) {};
};


int identity_element(const mul& ){
    return 1;
}

mul m(MOD);
add a(MOD);
sub s(MOD);


int modInverse(int base, int mod){
    return power(base, mod-2, mul(MOD));
}


const int BASE=128, INV=modInverse(BASE,MOD);
char str[N];

int main()
{
    scanf(" %s",str);
    ll h1,h2,pow=1;
    h1=h2=0;
    int n=strlen(str)-1;
    for(int i=0;str[i+1];i++)
    {
        if(i)
            pow=m(pow,BASE);
        h1=m(h1,BASE);
        h1=a(h1,str[i]);
        h2=a(h2,m(pow,str[n-i]));
        if(h1==h2)
            cout<<i+1<<' ';
    }
}
