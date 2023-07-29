#include <iostream>
#include <set>

using namespace std;


set<int> a,b;
int x,y,n;

int main(){
    cin>>n;
    while(n--){
        cin>>x>>y;
        a.insert(x);
        b.insert(y);
    }
    cout<<min(a.size(),b.size());
}
