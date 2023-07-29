#include<bits/stdc++.h>
#include<ext/numeric>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
using namespace __gnu_cxx;
typedef long long ll;

const ll MOD=1e9+7, OO=0x3f3f3f3f;
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
string str;

int main()
{
    cin>>str;
    int n=str.length();
    str+=str;
    ll h=0,pow=1;
    for(int i=0;i<n;i++)
    {
    	if(i)
    		pow=m(BASE,pow);
        h=a(h,m(str[i],pow));
    }
    ll ans=h,idx=0;
    for(int i=0,j=n;str[i+n];i++,j++)
    {
        h=s(h,str[i]);
        h=m(h,INV);
        h=a(h,m(str[j],pow));
        if(h>=ans)
        {
            ans=h;
            idx=i+1;
        }
    }

    for(int i=idx;i<(idx+n);i++)
        cout<<str[i];
    
}