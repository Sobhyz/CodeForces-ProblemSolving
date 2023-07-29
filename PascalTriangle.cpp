#include <iostream>

using namespace std;

long long int mat[33][33],n;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i<=1 || !j || j==i) mat[i][j]=1;
            else mat[i][j]=(mat[i-1][j]+mat[i-1][j-1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)cout<<mat[i][j]<<' ';
        cout<<endl;
    }
}