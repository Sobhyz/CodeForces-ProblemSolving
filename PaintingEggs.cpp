#include <iostream>

using namespace std;
const int N=1e6+5;

char ans[N];
int n,x,y,a=0,g=0;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        // if(!i){
        //     if(x<y){
        //         a+=x;
        //         ans[i]='A';
        //     }
        //     else{
        //         g+=y;
        //         ans[i]='G';
        //     }
        //     continue;
        // }
        if(a-g+x>500){
            ans[i]='G';
            g+=y;
            continue;
        }
        if(g-a+y>500){
            ans[i]='A';
            a+=x;
            continue;
        }
        if(x<y){
                a+=x;
                ans[i]='A';
            }
            else{
                g+=y;
                ans[i]='G';
            }
    }
    if(abs(a-g)>500){
        cout<<-1;
        return 0;
    }
    for(int i=0;i<n;i++)cout<<ans[i];
}