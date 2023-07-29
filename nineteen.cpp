#include <iostream>
#include <cstring>
using namespace std;
string str;

int main() {
	int a[4]={0,0,0,0};
    cin>>str;
    for(int i=0; str[i]; i++){
        a[0]+=(str[i]=='n');
        a[1]+=(str[i]=='e');
        a[2]+=(str[i]=='i');
        a[3]+=(str[i]=='t');
    }
    // cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<' '<<a[3]<<endl;
    a[0]-=3;
    a[0]>=0 ? a[0]=(a[0]/2)+1 : a[0] = 0;
    a[1]/=3;
    cout<<min(min(a[0],a[1]),min(a[2],a[3]));
	return 0;
}