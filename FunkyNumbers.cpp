#include <iostream>
#include <vector>

using namespace std;

long long int n;
vector <long long int> v;
void factor(){
    for(long long int i=1;i*(i+1)<=(int)1e9;i++){
        v.push_back(i*(i+1));
    }
    for(long long int i=1;i*i<=n;i++){
        long long int n1 = i*(i+1);
        if(binary_search(v.begin(),v.end(),n-n1))
        {
            cout<<"YES";
            return;
        }
        
    }
    cout<<"NO";
}

int main(){
    cin>>n;
    n*=2;
    factor();
}