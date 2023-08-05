#include <iostream>


using namespace std;
const int N=1e5+5;

int r,c,k;
int freq[N],ans=0;



int main(){
    cin>>r>>c>>k;
    memset(freq,0,sizeof freq);
    for (int i = 0; i < c; i++)
    {
        int x;
        cin>>x;
        freq[x]--;
    }
    sort(freq,freq+N);
    for(int i=0;i<k;i++){
        ans+=(-freq[i]);
    }
    cout<<ans;
    
}