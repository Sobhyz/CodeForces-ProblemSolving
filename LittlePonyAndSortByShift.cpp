#include <iostream>

using namespace std;
const int N=1e5+5;

int n;
int a[N];

int main(){
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
    int g=0,ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[(i+1)%n]){
            g++;
            if(g==1){
                ans=i+1;
            }
            else{
                cout<<-1;
                return 0;
            }
        }
    }
    cout<<(n-ans)%n;
}
////2 3 1 -2 -3 -1 2 3 