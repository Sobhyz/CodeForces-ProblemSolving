#include <iostream>

using namespace std;

long long int t,n,x,ans=0;
string str;
int main(){
    cin>>t;
    if(t==1){
        cin>>str>>x;
        for(int i=0;str[i];i++){
            ans*=x;
            if(str[i]>='A'){
                ans+=(str[i]-'A'+10);
            }
            else{
                ans+=(str[i]-'0');
            }
        }
        cout<<ans;
    }
    else{
        cin>>n>>x;
        string s;
        while(n){
            // cout<<n<<endl;
            int tmp = n%x;
            if(tmp>9)s+=(char(tmp-10+'A'));
            else s+=char(tmp+'0');
            n/=x;
        }
        reverse(s.begin(),s.end());
        cout<<s;
    }
    return 0;
}