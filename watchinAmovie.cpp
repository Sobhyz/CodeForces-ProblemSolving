#include <iostream>

using namespace std;

const int N=1e5+5;
int n,a[N],b[N],x;

int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]; 
    }
    int minu = 1, c=0;
    for(int i=0; i < n ; i++){
        if(minu+x <= a[i]){
            int tmp = (a[i]-minu)/x;
            minu+=(x*tmp);
            c+=((b[i]+1)-minu);
            minu = b[i]+1;
        }
        else{
            c+=((b[i]+1)-minu);
            minu = b[i]+1;
        }
    }
    cout<<c;
    return 0;
}