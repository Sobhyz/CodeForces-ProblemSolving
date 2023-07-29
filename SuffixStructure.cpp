#include <iostream>
#include <cstring>

using namespace std;

string str1,str2;



bool kmp(){
    int j=0;
    for(int i=0;str1[i];i++){
        if(str1[i] == str2[j])
            j++;
    }
    return j==str2.length();
}

int main(){
    cin>>str1>>str2;
    if(kmp()){
        cout<<"automaton";
        return 0;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    int f=kmp();
    if(f && str1.length() != str2.length())
        cout<<"both";
    else if(f)
        cout<<"array";
    else
        cout<<"need tree";
    
}