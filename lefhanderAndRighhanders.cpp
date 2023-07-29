#include <iostream>

using namespace std;

string s;
pair<char,int> p;
int main(){
    int n;
    cin>>n>>s;
    int j=n-1,i=(n/2)-1;
    for(;i>=0;i--,j++){
        if(j==n){
            j=n/2;
        }
        if(s[j]>s[i])
            cout<<i+1<<' '<<j+1<<endl;
        else
            cout<<j+1<<' '<<i+1<<endl;
    }
}