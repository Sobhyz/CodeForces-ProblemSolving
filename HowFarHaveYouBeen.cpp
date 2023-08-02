#include <iostream>

using namespace std;

int k;

int main(){
    cin>>k;
    if(k==1 || k==4)cout<<"Alas! Farha is bitten by snake. She is now at "<< 79-((k==1)*4)<<".";
    else if(k==6)cout<<"Yay! Farha has won the game. She is now at 100.";
    else if(k==5)cout<<"Farha is on ladder.";
    else cout<<"Nothing happened to her.";
}