#include <iostream>

using namespace std;
string str;
int a[2];

int main(){
    cin>>str;
    for(int i=0;str[i];i++){
        a[0]+=(str[i]=='4');
        a[1]+=(str[i]=='7');
    }
    if(!a[0] && !a[1]){
        cout<<-1;
        return 0;
    }
    if(a[0]>=a[1]){
        cout<<'4';
    }
    else{
        cout<<'7';
    }
}