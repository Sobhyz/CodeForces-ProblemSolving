#include <iostream>

using namespace std;

int t;

bool solve(string s1,string s2){
    reverse(s1.begin(),s1.end());
    s2+=s1;
    int c=0;
    for(int i=0;s2[i+1];i++)
    {
        c+=(s2[i]==s2[i+1]);
        if(c>1)
            return false;
    }
    return true;
}

int main()
{
    cin>>t;
    while(t--){
        string s1,s2;
        int n1,n2;
        cin>>n1>>n2>>s1>>s2;
        (solve(s2,s1) ? cout<<"YES"<<endl : cout<<"NO"<<endl);
    }
}