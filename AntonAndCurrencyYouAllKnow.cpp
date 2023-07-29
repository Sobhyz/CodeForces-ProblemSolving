#include <iostream>
#include <cmath>

using namespace std;

string str;

int main(){
    cin>>str;
    int l = str.length();
    int num=str[l-1]%'0';
    int idx=-1;
    for(int i=l-2;i>=0;i--){
        int curr = str[i]%'0';
        if(!(curr&1) && (idx==-1 || curr<num))
            idx=i;
    }
    if(idx==-1)
    {
        cout<<idx;
        return 0;
    }
    char c = str[l-1];
    str[l-1] = str[idx];
    str[idx] = c;
    cout<<str;
    // int ans = ((((n%((int)pow(10,f))))/10)*10) + (n/(int)(pow(10,f)))%10 + (((((n/(int)(pow(10,f)))/10)*10) + n%10) * (int)(pow(10,f)));
    // cout<<ans;
}