#include <iostream>

using namespace std;

int a[3][3];

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    }
    int corners = a[0][1]+a[2][1],f=a[0][1]+a[0][2],s=a[0][2]+a[1][2];
    
    a[0][0] = (corners+s-f)/2;
    a[2][2] = corners - a[0][0];
    a[1][1] = (f-a[2][2]);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }

}