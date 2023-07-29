#include <iostream>
#include <string>

using namespace std;

string str;
int a[26];

int main(){
    cin>>str;
    for(int i=0;str[i];i++)a[(str[i]%'a')]++;
    int o=0,e=0;
    for(int i = 0 ; i < 26 ; i++){
        if(a[i]){
            if(a[i]&1)o++;
            else e++;
        }
    }
    if(o<=1 || (o&1)){
        cout<<"First";
        return 0;
    }
    cout<<"Second";
}